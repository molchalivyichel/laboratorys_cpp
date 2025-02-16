package main

import (
	"fmt"
)

func PrintType(value interface{}) {
	switch v := value.(type) {
	case int, float64, float32:
		fmt.Println("Это число:", v)
	case string:
		fmt.Println("Это строка:", v)
	case bool:
		fmt.Println("Это булевое значение:", v)
	default:
		fmt.Printf("Это что-то другое (%T): %v\n", v, v)
	}
}

func main() {
	PrintType(42)
	PrintType(3.14)
	PrintType("пипа")
	PrintType(true)
	PrintType([]int{}) 
}
