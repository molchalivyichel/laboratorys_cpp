package main

import (
	"fmt"
)
type address struct {
	city string
	country string
}

type student struct {
	name string
	age int
	_address address

}

func (_student *student) printInfo(){
	fmt.Println("Имя:", _student.name, "Возраст:", _student.age, "Адрес:",_student._address.city, _student._address.country)
}

func main() {
	studentMike := student{"Майк",18,address{"Россия","Красноярск"}}

	studentMike.printInfo()
}