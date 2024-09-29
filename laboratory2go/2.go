package main

import (
	"fmt"
)

func max(numbers []int) int {
	max := numbers[0]
	for i := 0; i < len(numbers); i++ {
		if max < numbers[i] {
			max = numbers[i]
		}
	}
	return max
}

func min(numbers []int) int {
	min := numbers[0]
	for i := 0; i < len(numbers); i++ {
		if min > numbers[i] {
			min = numbers[i]
		}
	}
	return min
}

func main() {
	numbers := [5]int{2, 2, 1, 4, 10}
	fmt.Println("Максимальный элемент:", max(numbers[:]))
	fmt.Println("Минимальный элемент:", min(numbers[:]))
	fmt.Println(numbers)
}
