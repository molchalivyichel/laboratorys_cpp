package main

import (
    "fmt"
    "strconv"
    "strings"
)

func main() {
    const maxItems = 5
    var items [maxItems]string
    var prices [maxItems]float64
    var total float64
    
    fmt.Println("Введите список покупок (до 5 позиций):")
    
    for i := 0; i < maxItems; i++ {
        fmt.Printf("\nТовар %d:\n", i+1)
        fmt.Print("  Название: ")
        fmt.Scanln(&items[i])
        
        var priceStr string
        fmt.Print("  Цена: ")
        fmt.Scanln(&priceStr)
        
        price, err := strconv.ParseFloat(priceStr, 64)
        if err != nil {
            fmt.Fprintf(os.Stderr, "Ошибка при вводе цены: %s\n", err)
            return
        }
        
        prices[i] = price
        total += price
        
        if i == maxItems-1 || strings.ToLower(items[i+1]) == "стоп" {
            break
        }
    }
    
    fmt.Println("\nЧек:")
    fmt.Println("------------------------------------")
    fmt.Printf("%-20s %8s\n", "Товар", "Цена")
    fmt.Println("------------------------------------")
    
    for i := 0; i < len(items); i++ {
        if items[i] == "" {
            break
        }
        fmt.Printf("%-20s %8.2f\n", items[i], prices[i])
    }
    
    fmt.Println("------------------------------------")
    fmt.Printf("%-20s %8.2f\n", "Итого:", total)
}
