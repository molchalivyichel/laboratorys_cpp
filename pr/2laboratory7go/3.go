package main

import (
    "os"
    "fmt"
    "io"
)

func main() {
    // Создаем файл output.txt
    file, err := os.Create("output.txt")
    if err != nil {
        fmt.Fprintf(os.Stderr, "Ошибка при создании файла: %v\n", err)
        return
    }
    defer file.Close()

    // Записываем 10 строк в файл
    for i := 1; i <= 10; i++ {
        _, err := fmt.Fprintf(file, "Строка %d\n", i)
        if err != nil {
            fmt.Fprintf(os.Stderr, "Ошибка при записи в файл: %v\n", err)
            return
        }
    }
}
