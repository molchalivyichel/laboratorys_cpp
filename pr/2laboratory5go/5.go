package main

import (
    "fmt"
    "sync"
)

func main() {
    // Создаем три канала для передачи данных между этапами
    numbers := make(chan int)
    evenNumbers := make(chan int)
    result := make(chan int)
    
    var wg sync.WaitGroup
    
    // Горутина 1: генерирует числа
    wg.Add(1)
    go func() {
        defer wg.Done()
        for i := 1; i <= 10; i++ {
            numbers <- i
        }
        close(numbers)
    }()
    
    // Горутина 2: фильтрует четные числа
    wg.Add(1)
    go func() {
        defer wg.Done()
        for num := range numbers {
            if num%2 == 0 {
                evenNumbers <- num
            }
        }
        close(evenNumbers)
    }()
    
    // Горутина 3: выводит результат
    wg.Add(1)
    go func() {
        defer wg.Done()
        for num := range evenNumbers {
            result <- num
        }
        close(result)
    }()
    
    // Основная программа выводит финальный результат
    go func() {
        for res := range result {
            fmt.Println("Четное число:", res)
        }
    }()
    
    // Ждем завершения всех горутин
    wg.Wait()
}
