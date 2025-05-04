#include <iostream>
#include <string>
#include <new>

using namespace std;

// Класс Car с полем model
class Car {
public:
    std::string* model;

    // Конструктор
    Car() {
        model = new (nothrow) std::string;
        if (model == nullptr) {
            cerr << "Ошибка: память для модели не может быть выделена" << endl;
            exit(1); // Завершение программы в случае ошибки
        }
    }

    // Деструктор
    ~Car() {
        delete model;
    }

    // Конструктор копирования
    Car(const Car& other) {
        model = new (nothrow) std::string(*other.model);
        if (model == nullptr) {
            cerr << "Ошибка: память для модели не может быть выделена" << endl;
            exit(1); // Завершение программы в случае ошибки
        }
    }

    // Функция для установки модели
    void setModel(const std::string& newModel) {
        *model = newModel;
    }

    // Функция для вывода модели
    void printModel() const {
        cout << "Модель: " << *model << endl;
    }
};

int main() {
    // Создание динамического объекта Car
    Car* car1 = new (nothrow) Car;
    if (car1 == nullptr) {
        cerr << "Ошибка: память для Car не может быть выделена" << endl;
        return 1;
    }

    // Установка модели для car1
    car1->setModel("Toyota");

    // Создание второго объекта Car с использованием конструктора копирования
    Car car2(*car1);

    // Вывод моделей
    car1->printModel();
    car2.printModel();

    // Освобождение памяти для car1
    delete car1;

    return 0;
}
