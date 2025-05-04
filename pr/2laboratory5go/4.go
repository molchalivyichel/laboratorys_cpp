package main

import (
    "context"
    "fmt"
    "time"
)

func main() {
    // Создаем контекст с возможностью отмены
    ctx, cancel := context.WithCancel(context.Background())
    
    // Запускаем горутину
    go func() {
        for {
            select {
            case <-ctx.Done():
                fmt.Println("Получен сигнал остановки. Горутина завершается")
                return
            default:
                fmt.Println("Горутина работает...")
                time.Sleep(1 * time.Second)
            }
        }
    }()

    // Ждем 5 секунд, затем отменяем контекст
    time.Sleep(5 * time.Second)
    cancel()
    
    // Ждем завершения программы
    fmt.Println("Основная программа завершена")
}
