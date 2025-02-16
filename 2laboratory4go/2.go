package main

import (
	"fmt"
)

type ReaderWriter interface {
	Read() string
	Write(data string)
}

type File struct {
	strong string
}

func (f *File) Read() string {
	return f.strong
}

func (f *File) Write(data string) {
	f.strong += data
}

func UseReaderWriter(rw ReaderWriter, data string) {
	rw.Write(data)
	fmt.Println(rw.Read())
}

func main() {
	var myFile ReaderWriter = &File{}
	UseReaderWriter(myFile,"pivet")
}