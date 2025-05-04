#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Конструктор по умолчанию
    Complex() : real(0), imag(0) {}

    // Параметризованный конструктор
    Complex(double r, double i) : real(r), imag(i) {}

    // Метод для вывода комплексного числа
    void print() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }

    // Перегрузка оператора сложения
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main() {
    // Создание объектов класса Complex
    Complex c1(3, 4);
    Complex c2(1, 2);

    // Сложение двух комплексных чисел
    Complex sum = c1 + c2;

    // Вывод результата
    std::cout << "First complex number: ";
    c1.print();
    std::cout << "Second complex number: ";
    c2.print();
    std::cout << "Sum of the complex numbers: ";
    sum.print();

    return 0;
}
