package mathutils

func Factorial(a int) (result int) {
	result = 1

	if a == 0 || a == 1 {
		result = 1
	} else if a < 0 {
		result = 0
	} else {
		for i := 1; i <= a; i++ {
			result *= i
		}
	}
	return result
}