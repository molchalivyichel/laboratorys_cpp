#include <iostream>
#include <string>
#include <vector>

class Student {
private:
    std::string name;
    int age;
    double grade;

public:
    // �����������
    Student(const std::string& n, int a, double g) : name(n), age(a), grade(g) {}

    // ����� ��� ������ ���������� � ��������
    void printInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }
};

int main() {
    // �������� ������� �������� ������ Student
    std::vector<Student> students = {
        Student("����", 20, 4.5),
        Student("�����", 22, 3.8),
        Student("�������", 19, 4.0)
    };

    // ����� ���������� � ������ ��������
    for (const auto& student : students) {
        student.printInfo();
    }

    return 0;
}
