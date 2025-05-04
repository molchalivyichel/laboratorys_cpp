#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // Конструктор по умолчанию
    Car() : brand("Unknown"), model("Unknown"), year(0) {}

    // Параметризованный конструктор
    Car(const std::string& b, const std::string& m, int y) : brand(b), model(m), year(y) {}

    // Конструктор копирования
    Car(const Car& other) : brand(other.brand), model(other.model), year(other.year) {}

    // Метод для вывода информации об автомобиле
    void printInfo() const {
        std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    // Создание объекта с использованием конструктора по умолчанию
    Car car1;
    car1.printInfo();

    // Создание объекта с использованием параметризованного конструктора
    Car car2("Toyota", "Camry", 2020);
    car2.printInfo();

    // Создание нового объекта на основе уже существующего с использованием конструктора копирования
    Car car3(car2);
    car3.printInfo();

    return 0;
}
