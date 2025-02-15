package shapes

type Circle struct {
	Radius float32
	NumberPi float32
}

func (c Circle) Area() float32{
	return (c.Radius*c.Radius)*c.NumberPi
}

func (c Circle) Perimeter() float32{
	return (c.Radius*2)*c.NumberPi
}