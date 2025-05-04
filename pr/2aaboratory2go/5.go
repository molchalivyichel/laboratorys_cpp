package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	txt := ""
	for scanner.Scan() {
		txt = scanner.Text()
		break
	}
	fmt.Println(strings.Count(txt,"")-1,strings.ToUpper(txt))
}