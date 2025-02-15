package  main

import (
	"fmt"
	"laboratorys_cpp/2laboratory3go/2/shapes"
)

func main() {

	shapesMassive := []shapes.Shape{
		shapes.Circle{Radius: 5, NumberPi: 3.14},
		shapes.Rectangle{Length: 4.4, Width: 6.1},
	}

	for _, shape := range shapesMassive {
		fmt.Println(shape.Area())
		fmt.Println(shape.Perimeter())
	}
	
}