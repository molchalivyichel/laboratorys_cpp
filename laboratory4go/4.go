package main

import "fmt"

func reverseSlice(slice *[]int) {
	
	tempSlice := make([]int,len(*slice))

	for i := 0; i < len(*slice); i++ {
		tempSlice[len(*slice)-i-1] = (*slice)[i] 
	}

	*slice = tempSlice
}

func main() {
	oneSlice := []int{1,2,3,4,5,6,7,8,9,10}
	fmt.Println(oneSlice)
	reverseSlice(&oneSlice)
	fmt.Println(oneSlice)
}