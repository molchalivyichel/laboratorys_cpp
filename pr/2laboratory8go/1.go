package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	// Открываем файл logs.txt для чтения
	file, err := os.Open("logs.txt")
	if err != nil {
		fmt.Println("Ошибка при открытии файла logs.txt:", err)
		return
	}
	defer file.Close()

	// Создаем файл filtered.txt для записи
	filteredFile, err := os.Create("filtered.txt")
	if err != nil {
		fmt.Println("Ошибка при создании файла filtered.txt:", err)
		return
	}
	defer filteredFile.Close()

	// Считываем строку-фильтр от пользователя
	var filter string
	fmt.Print("Введите строку-фильтр: ")
	fmt.Scanln(&filter)

	// Читаем файл logs.txt построчно
	scanner := bufio.NewScanner(file)
	count := 0

	for scanner.Scan() {
		line := scanner.Text()
		// Проверяем, содержит ли строка заданное ключевое слово
		if contains(line, filter) {
			// Записываем строку в файл filtered.txt
			filteredFile.WriteString(line + "\n")
			count++
		}
	}

	if err := scanner.Err(); err != nil {
		fmt.Println("Ошибка при чтении файла logs.txt:", err)
		return
	}

	// Выводим количество отфильтрованных строк
	fmt.Printf("Количество отфильтрованных строк: %d\n", count)
}

// Функция для проверки наличия подстроки в строке
func contains(s, substr string) bool {
	return s != "" && (s == substr || (len(s) > len(substr) && (s[:len(substr)] == substr || contains(s[1:], substr))))
}
