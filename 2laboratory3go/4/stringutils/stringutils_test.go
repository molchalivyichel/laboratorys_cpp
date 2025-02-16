package stringutils

import (
	"testing"
	"github.com/fatih/color"
)

func TestReverse(t *testing.T) {
	input := []string{"hello","world","Go!","абвгд"}
	expected := []string{"olleh","dlrow","!oG","дгвба"}


	for i := 0; i < len(input); i++ {
		if got := Reverse(input[i]); got != expected[i] {
			color.Red("Ошибка")
			t.Errorf("Ожидалось(%q) = %q; получено %q", input[i], got, expected[i])
		}
	}
}

func TestIsPalindrome(t *testing.T) {
	input := []string{"hello","world","toot","Анна"}
	expected := []bool{false,false,true,true}


	for i := 0; i < len(input); i++ {
		if got := IsPalindrome(input[i]); got != expected[i] {
			color.Red("Ошибка")
			t.Errorf("Ожидалось(%q) = %t; получено %t", input[i], got, expected[i])
		}
	}
}
