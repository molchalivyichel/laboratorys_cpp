package main
import (
    "fmt"
	"math/rand"
	"time"
)

func create_massive(rows int, maxrand int) []int {
	rand.Seed(time.Now().UnixNano())
    massive := make([]int, rows)
    for i := 0; i < rows; i++ {
        massive[i] = rand.Intn(maxrand)
    }

	return massive
}

func booble_sort(massive []int, show bool) []int {
    temp := 0
    check_int := 0
    count := 0
    
    if (show == true){
        fmt.Println("Start for") 
    }    
    for {
        for i := 0; i < len(massive)-1; i++ {
            if (massive[i] > massive[i+1]) {
                temp = massive[i]
                massive[i] = massive[i+1]
                massive[i+1] = temp
                
                check_int += 1
            }
            
            if (show == true){
                fmt.Println(count,"-",massive)   
            }
            count += 1
        }
        if (show == true){
            fmt.Println("Continie for")
        }
        if (check_int == 0){
            break
        }else{
            check_int = 0
        }
    }
    if (show == true){    
        fmt.Println("End for")
    }
    return massive
}

func main() {
  massive := create_massive(10, 100)
  fmt.Println(massive)
  
  booble_sort(massive, false)
}