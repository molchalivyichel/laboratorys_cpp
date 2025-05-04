package main

import (
	"fmt"
)

type counter struct {
	value int
}

func (_counter *counter)  increment() {
	_counter.value += 1
}
func (_counter *counter)  reset() {
	_counter.value = 0
}


func main() {
	cou := counter{10}
	fmt.Println(cou.value)
	cou.increment()
	fmt.Println(cou.value)
	cou.reset()
	fmt.Println(cou.value)

}