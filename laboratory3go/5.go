package main

import "fmt"

func addStudent(mapStudents map[string][]int, name string, grades []int) map[string][]int {
	mapStudents[name] = grades
	return mapStudents
}

func editGradeStudent(mapStudents map[string][]int, name string, idGrade int, newGrade int) map[string][]int {
	if _, ok := mapStudents[name]; ok {
		if len(mapStudents[name]) > idGrade {
			mapStudents[name][idGrade] = newGrade
		} else {
			fmt.Println("Неверный индекс списка оценок студента")
		}
	} else {
		fmt.Println("Неверное имя студента")
	}
	return mapStudents
}

func meanGradesStudents(mapStudents map[string][]int) float64 {
	count := 0
	sumGrade := 0
	for key := range mapStudents {
		for id := range mapStudents[key] {
			sumGrade += mapStudents[key][id]
			count += 1
		}
	}
	return float64(sumGrade) / float64(count)
}

func main() {
	mapStudents := make(map[string][]int)

	mapStudents = addStudent(mapStudents, "Jonny", []int{3, 3, 3, 3, 3})
	mapStudents = addStudent(mapStudents, "Maria", []int{5, 4, 3, 2, 2})
	mapStudents = addStudent(mapStudents, "Max", []int{5, 5, 5, 5, 5})

	mapStudents = editGradeStudent(mapStudents, "Max", 2, 2)

	fmt.Println(mapStudents)

	fmt.Println(meanGradesStudents(mapStudents))
}
