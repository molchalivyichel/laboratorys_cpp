package main

import (
    "fmt"
    "math/rand"
    "sync"
    "time"
)

func main() {
    // Инициализируем WaitGroup
    var wg sync.WaitGroup
    
    // Запускаем 5 горутин
    for i := 1; i <= 5; i++ {
        // Увеличиваем счетчик WaitGroup
        wg.Add(1)
        
        // Запускаем горутину
        go func(id int) {
            defer wg.Done() // Уменьшаем счетчик после завершения
            
            // Случайная задержка от 1 до 3 секунд
            sleepTime := time.Duration(rand.Intn(3)+1) * time.Second
            time.Sleep(sleepTime)
            
            fmt.Printf("Горутина %d завершила работу после сна в %v\n", id, sleepTime)
        }(i)
    }
    
    // Ждем завершения всех горутин
    wg.Wait()
    fmt.Println("Все горутины завершили работу")
}
