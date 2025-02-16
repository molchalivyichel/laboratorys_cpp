package stringutils

import "strings"

func Reverse(s string) (tempResult string) {
	runes := []rune(s) 
	
	for i := len(runes) - 1; i >= 0; i-- {
		tempResult += string(runes[i])
	}
	return tempResult
}

func IsPalindrome(s string) (result bool) {
	s = strings.ToLower(s)
	tempResult := Reverse(s)
	if s == tempResult {
		result = true
	} else {
		result = false
	}
	return result
}