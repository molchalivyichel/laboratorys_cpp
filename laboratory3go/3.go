package main

import (
	"fmt"
	"bufio"
	"os"
)

func cinSortStr() (result []string){
	
	
	words := []string{}
	sc := bufio.NewScanner(os.Stdin)

	for sc.Scan() {
		txt := sc.Text()
		if txt == "N" {
			break
		}
		words = append(words, txt)
	}

	bubbleSort := func(arr []string) ([]string){
		n := len(arr)
		for i := 0; i < n-1; i++ {
			for j := 0; j < n-i-1; j++ {
				if len(arr[j]) > len(arr[j+1]) {
					arr[j], arr[j+1] = arr[j+1], arr[j] 
				}
			}
		}
		return arr
	}

	result = bubbleSort(words)

	return result
}

func main() {

	fmt.Println(cinSortStr())
}