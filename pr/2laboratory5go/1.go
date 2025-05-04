package main

import (
    "fmt"
    "sync"
)

func main() {
    // Создаем небуферизированный канал
    ch := make(chan int)
    
    // Создаем waitGroup для ожидания завершения горутин
    var wg sync.WaitGroup
    
    // Запускаем горутину для отправки чисел
    wg.Add(1)
    go func() {
        defer wg.Done()
        for i := 1; i <= 10; i++ {
            ch <- i
        }
        close(ch) // Закрываем канал после отправки всех чисел
    }()
    
    // Запускаем горутину для приема и вывода чисел
    wg.Add(1)
    go func() {
        defer wg.Done()
        for num := range ch {
            fmt.Println("Получено число:", num)
        }
    }()
    
    // Ждем завершения всех горутин
    wg.Wait()
}
