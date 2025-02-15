package stringutils

import "fmt"

func Reverse(s string) (tempResult string) {

	for i := 0; i < len(s); i++ {
		tempResult += string(s[len(s)-i-1])
	}
	fmt.Println(tempResult)
	return tempResult
}

func IsPalindrome(s string) (result bool) {
	tempResult := Reverse(s)
	if s == tempResult {
		result = true
	} else {
		result = false
	}
	return result
}