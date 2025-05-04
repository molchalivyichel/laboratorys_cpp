#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Конструктор по умолчанию
    Rectangle() : length(1), width(1) {}

    // Параметризованный конструктор
    Rectangle(double len, double wdt) : length(len), width(wdt) {}

    // Метод для вычисления площади
    double area() const {
        return length * width;
    }

    // Метод для вычисления периметра
    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    // Создание объектов класса Rectangle
    Rectangle rect1; // Использование конструктора по умолчанию
    Rectangle rect2(5, 3); // Использование параметризованного конструктора
    Rectangle rect3(4.5, 2.1);

    // Вывод площади и периметра для каждого прямоугольника
    std::cout << "Rectangle 1 - Area: " << rect1.area() << ", Perimeter: " << rect1.perimeter() << std::endl;
    std::cout << "Rectangle 2 - Area: " << rect2.area() << ", Perimeter: " << rect2.perimeter() << std::endl;
    std::cout << "Rectangle 3 - Area: " << rect3.area() << ", Perimeter: " << rect3.perimeter() << std::endl;

    return 0;
}
