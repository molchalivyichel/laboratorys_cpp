package main

import (
	"fmt"
)

type Sortable interface {
	Less(i, j int) bool
	Swap(i, j int)
	Len() int
}

type IntSlice []int
type StringSlice []string

func Sort(data Sortable) {
	for i := 0; i < data.Len() - 1; i++ {
		for j := 0; j < data.Len() - 1 -i; j++ {
			if data.Less(j, j+1) == false {
				data.Swap(j,j+1)
			}
		}
	}
}

func (is IntSlice) Less(i, j int) bool {
	return is[i] < is[j]
}

func (ss StringSlice) Less(i, j int) bool {
	return ss[i] < ss[j]
}

func (is IntSlice) Swap(i, j int) {
	is[i], is[j] = is[j], is[i]
}

func (ss StringSlice) Swap(i, j int) {
	ss[i], ss[j] = ss[j], ss[i]
}

func (is IntSlice) Len() int {
	return len(is)
}

func (ss StringSlice) Len() int {
	return len(ss)
}

func main() {
	one := IntSlice{9,8,7,6}
	fmt.Println(one)
	Sort(one)
	fmt.Println(one)

	two := StringSlice{"кафе","ананас","граната","дом"}
	fmt.Println(two)
	Sort(two)
	fmt.Println(two)
}