package main

import (
	"fmt"
)

type book struct {
	title string
	author string
	year int
}

func printBook(_book *book) {
	fmt.Println("Название:",_book.title,"Автор:",_book.author,"Год издания:",_book.year)
}

func main() {
	coolBook := book{"Крутая книга","Джордж",1984}

	printBook(&coolBook)
}