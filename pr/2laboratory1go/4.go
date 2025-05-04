package main

import (
	"fmt"
	"encoding/json"
)

type Car struct {
	Model string `json:"model"`
	Year int `json:"year"`
	Color string `json:"color"`
}

func main() {
	car := Car{"Лали", 2025, "#00a08a"}
	jsonData, _ := json.Marshal(car)
	fmt.Println(string(jsonData))

	_ = json.Unmarshal(jsonData,&car)
	fmt.Println(car)
}