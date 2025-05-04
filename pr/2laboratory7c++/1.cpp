#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // ����������� �� ���������
    Rectangle() : length(1), width(1) {}

    // ����������������� �����������
    Rectangle(double len, double wdt) : length(len), width(wdt) {}

    // ����� ��� ���������� �������
    double area() const {
        return length * width;
    }

    // ����� ��� ���������� ���������
    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    // �������� �������� ������ Rectangle
    Rectangle rect1; // ������������� ������������ �� ���������
    Rectangle rect2(5, 3); // ������������� ������������������ ������������
    Rectangle rect3(4.5, 2.1);

    // ����� ������� � ��������� ��� ������� ��������������
    std::cout << "Rectangle 1 - Area: " << rect1.area() << ", Perimeter: " << rect1.perimeter() << std::endl;
    std::cout << "Rectangle 2 - Area: " << rect2.area() << ", Perimeter: " << rect2.perimeter() << std::endl;
    std::cout << "Rectangle 3 - Area: " << rect3.area() << ", Perimeter: " << rect3.perimeter() << std::endl;

    return 0;
}
