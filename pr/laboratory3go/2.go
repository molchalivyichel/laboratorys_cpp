package main

import "fmt"

func unique(oneMassive []int32) (result []int32) {
	count := make(map[int32]int)

	for _, num := range(oneMassive) {
		count[num] += 1
	}

	for _, num := range(oneMassive) {
		if count[num] != 0  {
			result = append(result, num)
			count[num] = 0
		}
	}

	return result
}

func main() {
	oneMassive := []int32{6,1, 2, 3, 4, 5, 5, 5,2,3,4,5,6}

	fmt.Println(unique(oneMassive))
}