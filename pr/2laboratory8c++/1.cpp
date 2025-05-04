#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    // Конструктор
    Integer() {
        cout << "Создан объект класса Integer" << endl;
        value = 0;
    }

    // Функция установки значения
    void setValue(int newValue) {
        value = newValue;
    }

    // Функция получения значения
    int getValue() const {
        return value;
    }

    // Функция вывода значения
    void printValue() const {
        cout << "Значение: " << value << endl;
    }
};

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
