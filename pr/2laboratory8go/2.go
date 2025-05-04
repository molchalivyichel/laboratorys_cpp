package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    scanner := bufio.NewScanner(os.Stdin)
    totalBytes := 0
    
    for scanner.Scan() {
        line := scanner.Text() + "\n"
        os.Stdout.Write([]byte(line))
        totalBytes += len(line)
    }
    
    if err := scanner.Err(); err != nil {
        fmt.Fprintln(os.Stderr, "Ошибка при чтении ввода:", err)
        return
    }
    
    fmt.Printf("\nОбщее количество скопированных байт: %d\n", totalBytes)
}

