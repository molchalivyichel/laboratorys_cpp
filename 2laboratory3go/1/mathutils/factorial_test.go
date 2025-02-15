package mathutils

import "testing"

func TestFactorialPositive(t *testing.T) {
	result := Factorial(2)
	excepted := 2

	if result != excepted {
		t.Errorf("Ожидалось %d, получено %d", excepted, result)
	}
}

func TestFactorialZero(t *testing.T) {
	result := Factorial(0)
	excepted := 1

	if result != excepted {
		t.Errorf("Ожидалось %d, получено %d", excepted, result)
	}
}

func TestFactorialNegative(t *testing.T) {
	result := Factorial(-1)
	excepted := 0

	if result != excepted {
		t.Errorf("Ожидалось %d, получено %d", excepted, result)
	}
}
