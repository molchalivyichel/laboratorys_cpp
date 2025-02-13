package main

import "fmt"

func associationMassive(oneMassive []int32, twoMassive []int32) (result []int32) {

	count := make(map[int32]int)

	for _, num := range(oneMassive) {
		count[num] += 1
	}

	for _, num := range twoMassive {
		if count[num] > 0{
			result = append(result, num)
			count[num] -= 1
		}
	}

	return result
}

func main() {
	oneMassive := []int32{1, 2, 3, 4, 5}
	twoMassive := []int32{3, 4, 5, 6, 7}

	fmt.Println(associationMassive(oneMassive, twoMassive))
}
