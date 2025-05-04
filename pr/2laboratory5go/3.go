package main

import (
    "fmt"
    "sync"
)

func main() {
    // Создаем два небуферизированных канала
    numbers := make(chan int)
    result := make(chan int)
    
    // Создаем waitGroup для ожидания завершения всех горутин
    var wg sync.WaitGroup
    
    // Горутина 1: отправляет числа
    wg.Add(1)
    go func() {
        defer wg.Done()
        for i := 1; i <= 5; i++ {
            numbers <- i
        }
        close(numbers)
    }()
    
    // Горутина 2: умножает числа
    wg.Add(1)
    go func() {
        defer wg.Done()
        for num := range numbers {
            result <- num * 2
        }
        close(result)
    }()
    
    // Горутина 3: выводит результат
    wg.Add(1)
    go func() {
        defer wg.Done()
        for res := range result {
            fmt.Println("Результат:", res)
        }
    }()
    
    // Ждем завершения всех горутин
    wg.Wait()
}
