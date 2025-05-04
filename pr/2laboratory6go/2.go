package main

import (
	"fmt"
)

func sum(numbers []int, result chan<- int) {
	sum := 0
	for _, num := range numbers {
		sum += num
	}
	result <- sum
}

func main() {
	numbers := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	half := len(numbers) / 2

	// Создаем каналы для передачи результатов
	result1 := make(chan int)
	result2 := make(chan int)

	// Запускаем две горутины для вычисления суммы каждой половины
	go sum(numbers[:half], result1)
	go sum(numbers[half:], result2)

	// Собираем результаты и вычисляем общую сумму
	sum1 := <-result1
	sum2 := <-result2
	totalSum := sum1 + sum2

	fmt.Println("Общая сумма:", totalSum)
}
