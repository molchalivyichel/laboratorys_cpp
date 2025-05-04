package main

import (
	"fmt"
)

func main() {
	laught := 0
	numbers := make([]int, laught)

	fmt.Print("Введите длину: ")
	fmt.Scan(&laught)

	j := 1
	h := 1
	for i := 0; i < laught; i++ {
		numbers = append(numbers, j)
		j += h
		numbers = append(numbers, h)
		h += j
	}
	fmt.Println(laught)
	fmt.Println(numbers)
}
