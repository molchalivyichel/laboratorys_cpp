package main

import "fmt"

func swap(one *int, two *int) {
	*one, *two = *two, *one
}

func main() {
	one := 10
	two := 20
	
	fmt.Println(one, two)
	swap(&one, &two)
	fmt.Println(one, two)
}