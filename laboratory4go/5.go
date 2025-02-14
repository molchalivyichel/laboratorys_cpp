package main

import "fmt"

func reverseMap(mapa *map[string]int) {

	keys := make([]string, len(*mapa))
	for key := range *mapa {
		keys = append(keys, key)
	}

	for i := 0; i < len(keys)-1; i++ {
		for j := 0; j < len(keys)-i-1; j++ {
			if keys[j] > keys[j+1] { 
				keys[j], keys[j+1] = keys[j+1], keys[j]
			}
		}
	}

	tempmapa := make(map[string]int, len(*mapa))
	for i := len(keys) - 1; i >= 0; i-- {
		tempmapa[keys[i]] = (*mapa)[keys[i]]
	}

	*mapa = tempmapa
}

func main() {
	oneMap := map[string]int{"one":1,"two":2, "fhree":3} //Map может выводиться хаотично, так что нет гарантий на вывод
	fmt.Println(oneMap)
	reverseMap(&oneMap)
	fmt.Println(oneMap)
}