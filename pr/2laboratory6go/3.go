package main

import (
	"fmt"
	"sync"
)

func main() {
	// Создаем карту для хранения данных
	numbers := make(map[int]int)
	var wg sync.WaitGroup

	// Запускаем 10 горутин
	for i := 1; i <= 10; i++ {
		wg.Add(1)
		go func(index int) {
			defer wg.Done()
			// Записываем в карту квадрат индекса
			numbers[index] = index * index
		}(i)
	}

	// Ждем завершения всех горутин
	wg.Wait()

	// Выводим содержимое карты
	fmt.Println(numbers)
}
