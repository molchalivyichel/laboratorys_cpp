#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // ����������� �� ���������
    Complex() : real(0), imag(0) {}

    // ����������������� �����������
    Complex(double r, double i) : real(r), imag(i) {}

    // ����� ��� ������ ������������ �����
    void print() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }

    // ���������� ��������� ��������
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main() {
    // �������� �������� ������ Complex
    Complex c1(3, 4);
    Complex c2(1, 2);

    // �������� ���� ����������� �����
    Complex sum = c1 + c2;

    // ����� ����������
    std::cout << "First complex number: ";
    c1.print();
    std::cout << "Second complex number: ";
    c2.print();
    std::cout << "Sum of the complex numbers: ";
    sum.print();

    return 0;
}
