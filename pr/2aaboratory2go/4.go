package main

import (
	"fmt"
)

type point struct {
	x int 
 	y int 
}

type circle struct {
	radius int 
	pointCenter point
}

func (_point *point) move(dx int, dy int) {
	_point.x = dx
	_point.y = dy
}

func (_circle *circle) move(dx int, dy int) {
	_circle.pointCenter.x = dx
	_circle.pointCenter.y = dy
}

func main() {
	pointik := point{10,10}
	circleik := circle{20,pointik}
	
	fmt.Println(pointik)
	fmt.Println(circleik,"\nEdit")

	pointik.move(0,0)

	fmt.Println(pointik)
	fmt.Println(circleik,"\nEdit")

	circleik.move(30,30)

	fmt.Println(pointik)
	fmt.Println(circleik)
}