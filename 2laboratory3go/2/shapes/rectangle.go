package shapes

type Rectangle struct {
	Length  float32
	Width float32
}

func (r Rectangle) Area() float32{
	return r.Length * r.Width
}

func (r Rectangle) Perimeter() float32{
	return (r.Length+r.Width)*2
}