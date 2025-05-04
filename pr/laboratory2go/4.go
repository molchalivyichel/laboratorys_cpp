package main

import (
	"fmt"
	"math/rand"
	"time"
)

func create_massive(rows int, cols int, maxrand int) [][]int {
	rand.Seed(time.Now().UnixNano())

	massive := make([][]int, rows)
	for i := range massive {
		massive[i] = make([]int, cols)
	}

	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++ {
			massive[i][j] = rand.Intn(maxrand)
		}
	}
	return massive
}

func tran_massive(massive [][]int, rows int, cols int) [][]int {
	massive_new := make([][]int, cols)
	for i := range massive_new {
		massive_new[i] = make([]int, rows)
	}

	for i := 0; i < rows; i++ {
		for j := 0; j < cols; j++ {
			massive_new[i][j] = massive[j][i]
		}
	}

	return massive_new
}

func main() {
	rows := 5
	cols := 5
	maxrand := 100

	massive := create_massive(rows, cols, maxrand)

	for i := 0; i < rows; i++ {
		fmt.Println(massive[i])
	}

	massive_new := tran_massive(massive, rows, cols)

	for i := 0; i < rows; i++ {
		fmt.Println(massive_new[i])
	}

}
