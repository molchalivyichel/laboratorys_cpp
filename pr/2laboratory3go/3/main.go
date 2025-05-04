package main

import (
	"fmt"
	"github.com/fatih/color"
)

func printMessage(message string, check bool) {
	if check {
		color.Green(message)
	} else {
		color.Red(message)
	}
}

func main() {
	fmt.Println("test")
	printMessage("TRUE",true)
	printMessage("FALSE",false)
}