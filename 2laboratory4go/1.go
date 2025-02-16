package main

import (
	"fmt"
	"math"
)

type Shape interface {
	Area() float64
}

type Rectangle struct {
	width float64
	height float64
}

type Circle struct {
	radius float64
}

func (r *Rectangle) Area() float64 {
	return r.height * r.width
}

func (c *Circle) Area() float64 {
	return c.radius*c.radius*math.Pi
}

func ShapeArea(s Shape) {
	fmt.Println(s.Area())
}

func main() {
	one := Rectangle{width: 9.99, height: 9.99}
	two := Circle{radius: 9.99}

	ShapeArea(&one)
	ShapeArea(&two)
}