package main

import (
	"fmt"
)

type Transport interface {
	Deliver() string
}

type Car struct{}

func (c Car) Deliver() string {
	return "Доставка на машине"
}

type Ship struct{}

func (s Ship) Deliver() string {
	return "Доставка на корабле"
}

func NewTransport(transportType string) Transport {
	if transportType == "car" {
		return Car{}
	} else if transportType == "ship" {
		return Ship{}
	}
	return nil 
}

func main() {
	transport1 := NewTransport("car")
	transport2 := NewTransport("ship")

	fmt.Println(transport1.Deliver()) 
	fmt.Println(transport2.Deliver()) 
}
