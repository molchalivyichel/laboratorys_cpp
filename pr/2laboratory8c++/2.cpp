#include <iostream>
using namespace std;

// Объявление класса
class Integer {
private:
    int value;

public:
    // Прототипы функций
    Integer();
    void setValue(int newValue);
    int getValue() const;
    void printValue() const;
};

// Определение функций

// Конструктор
Integer::Integer() {
    cout << "Создан объект класса Integer" << endl;
    value = 0;
}

// Функция установки значения
void Integer::setValue(int newValue) {
    value = newValue;
}

// Функция получения значения
int Integer::getValue() const {
    return value;
}

// Функция вывода значения
void Integer::printValue() const {
    cout << "Значение: " << value << endl;
}

int main() {
    // Создаем объект
    Integer myInteger;

    // Получаем начальное значение
    cout << "Начальное значение: " << myInteger.getValue() << endl;

    // Устанавливаем новое значение
    myInteger.setValue(42);

    // Выводим новое значение
    myInteger.printValue();

    return 0;
}
