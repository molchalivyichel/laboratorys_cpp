package main

import "fmt"

func RecyrseNumber(number int32, result int32) int32 {
	if number == 0 {
		return result
	}
	return RecyrseNumber(number-1, result+number)
}

func main() {
	number := 0
	fmt.Println(RecyrseNumber(int32(number),0))
}