package main

import (
	"fmt"
)

type point struct {
	x int
	y int
}

func comparison(_point ...*point) (resultX []bool, resultY []bool) {
	for i := 0; i < len(_point)-1; i++ {
		for j := i + 1; j < len(_point); j++ {
			resultX = append(resultX, _point[i].x == _point[j].x)
			resultY = append(resultY, _point[i].y == _point[j].y)
		}
	}
	return resultX, resultY
}

func printResultComparison(size int, date []bool) {
	word := ""
	for i := 0; i < size-1; i++ {
		for j := i + 1; j < size; j++ {
			if date[i] == true {
				word = "равны"
			} else {
				word = "различны"
			}
			fmt.Println("Сравнение", i+1, "-ой точки и", j+1, "-ой точки", word)
		}
	}
}

func main() {
	one := point{10, 10}
	two := point{10, 10}
	three := point{2, 2}
	fmt.Println(comparison(&one, &two))

	resultX, resultY := comparison(&one, &two, &three)
	fmt.Println("Результаты сравнения точек по X")
	printResultComparison(3, resultX)
	fmt.Println("Результаты сравнения точек по Y")
	printResultComparison(3, resultY)
}