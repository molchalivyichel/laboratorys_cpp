package main

import "fmt"

func reverseMassive(massive *[10]int) {
	tempMassive := [10]int{}

	for i := 0; i < 10; i++ {
		tempMassive[10-i-1] = (*massive)[i] 
	}
	*massive = tempMassive
}

func main() {
	oneMassive := [10]int{1,2,3,4,5,6,7,8,9,10}
	fmt.Println(oneMassive)
	reverseMassive(&oneMassive)
	fmt.Println(oneMassive)
}