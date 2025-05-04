package main

import "fmt"

func sum(numbers []int, number int) int {
	sum := 0
	for i := 0; i < len(numbers); i++ {
		if number < numbers[i] {
			sum += numbers[i]
		}
	}
	return sum
}

func main() {
	numbers := [5]int{2, 2, 1, 4, 10}
	number := 4
	fmt.Println("Сумма элементов, больше определенного элемента:", sum(numbers[:], number))
}
