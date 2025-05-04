package main

import (
	"fmt"
)

type rectangle struct {
	width float32
	height float32
}

func (_rectangle *rectangle) area() (float32) {
	return _rectangle.width * _rectangle.height
}

func (_rectangle *rectangle) perimeter() (float32) {
	return (_rectangle.width + _rectangle.height) * 2
}

func main() {
	bigRectangle := rectangle{100,10}
	fmt.Println(bigRectangle.area())
	fmt.Println(bigRectangle.perimeter())
}