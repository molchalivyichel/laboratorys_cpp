#include <iostream>
#include <string>
#include <vector>

class Student {
private:
    std::string name;
    int age;
    double grade;

public:
    // Конструктор
    Student(const std::string& n, int a, double g) : name(n), age(a), grade(g) {}

    // Метод для вывода информации о студенте
    void printInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }
};

int main() {
    // Создание вектора объектов класса Student
    std::vector<Student> students = {
        Student("Вика", 20, 4.5),
        Student("Семен", 22, 3.8),
        Student("Алексей", 19, 4.0)
    };

    // Вывод информации о каждом студенте
    for (const auto& student : students) {
        student.printInfo();
    }

    return 0;
}
