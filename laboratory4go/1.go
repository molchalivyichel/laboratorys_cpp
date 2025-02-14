package main

import (
	"fmt"
)

type Person struct {
	name string
	age uint
}

func printPerson(person *Person) {
	fmt.Println("name =",person.name)
	fmt.Println("age =",person.age)
}

func main() {
	tom := Person {name: "Tom", age: 20}
	printPerson(&tom)
}