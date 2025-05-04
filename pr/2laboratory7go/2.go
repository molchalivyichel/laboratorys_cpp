package main

import (
    "bytes"
    "io"
    "os"
)

func main() {
    // Создаем буфер
    var buf bytes.Buffer

    // Записываем строку в буфер
    _, err := buf.WriteString("Hello, Go!")
    if err != nil {
        panic(err)
    }

    // Создаем новый буфер для чтения
    reader := bytes.NewReader(buf.Bytes())

    // Копируем данные из ридера в стандартный вывод
    _, err = io.Copy(os.Stdout, reader)
    if err != nil {
        panic(err)
    }
}
