package main

import (
    "fmt"
    "io"
    "os"
    "sync"
    "time"
)

type SyncWriter struct {
    m    sync.Mutex
    file io.Writer
}

func (w *SyncWriter) Write(b []byte) (n int, err error) {
    w.m.Lock()
    defer w.m.Unlock()
    return w.file.Write(b)
}

func main() {
    // Создаем файл для записи
    file, err := os.Create("log.txt")
    if err != nil {
        fmt.Fprintf(os.Stderr, "Ошибка при создании файла: %v\n", err)
        return
    }
    defer file.Close()

    // Создаем защищенный писатель
    syncWriter := &SyncWriter{sync.Mutex{}, file}

    // Инициализируем WaitGroup
    var wg sync.WaitGroup

    // Запускаем 5 горутин
    for i := 1; i <= 5; i++ {
        wg.Add(1)
        go func(id int) {
            defer wg.Done()
            
            // Случайная задержка для демонстрации работы
            time.Sleep(time.Duration(rand.Intn(3)) * time.Second)
            
            // Записываем сообщение в файл
            fmt.Fprintf(syncWriter, "Горутина %d: запись %d\n", id, time.Now().UnixNano())
        }(i)
    }

    // Ждем завершения всех горутин
    wg.Wait()
}
