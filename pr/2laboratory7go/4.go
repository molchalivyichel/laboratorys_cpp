package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    // Открываем файл для чтения
    file, err := os.Open("input.txt")
    if err != nil {
        fmt.Fprintf(os.Stderr, "Ошибка при открытии файла: %v\n", err)
        return
    }
    defer file.Close()

    // Создаем сканер с разделением по словам
    scanner := bufio.NewScanner(file)
    scanner.Split(bufio.ScanWords)

    // Подсчитываем количество слов
    wordCount := 0
    for scanner.Scan() {
        wordCount++
    }

    // Проверяем ошибки после сканирования
    if err := scanner.Err(); err != nil {
        fmt.Fprintf(os.Stderr, "Ошибка при чтении файла: %v\n", err)
        return
    }

    fmt.Printf("В файле %d слов\n", wordCount)
}
