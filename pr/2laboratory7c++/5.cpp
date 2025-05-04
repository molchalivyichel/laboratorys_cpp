#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // ����������� �� ���������
    Car() : brand("Unknown"), model("Unknown"), year(0) {}

    // ����������������� �����������
    Car(const std::string& b, const std::string& m, int y) : brand(b), model(m), year(y) {}

    // ����������� �����������
    Car(const Car& other) : brand(other.brand), model(other.model), year(other.year) {}

    // ����� ��� ������ ���������� �� ����������
    void printInfo() const {
        std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    // �������� ������� � �������������� ������������ �� ���������
    Car car1;
    car1.printInfo();

    // �������� ������� � �������������� ������������������ ������������
    Car car2("Toyota", "Camry", 2020);
    car2.printInfo();

    // �������� ������ ������� �� ������ ��� ������������� � �������������� ������������ �����������
    Car car3(car2);
    car3.printInfo();

    return 0;
}
