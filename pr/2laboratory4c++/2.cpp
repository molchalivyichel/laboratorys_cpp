#include <iostream>

using namespace std;

double* getUserInput() {
    double *dynamicDouble;

    dynamicDouble = new double{};

    if (dynamicDouble == nullptr) {
        cout << "Ошибка: память не может быть выделена" << endl;
        return nullptr;
    }

    cout << "Введите число: ";
    cin >> *dynamicDouble;

    return dynamicDouble;
}

void freeMemory(double *ptr) {
    if (ptr != nullptr) {
        delete ptr;
    }
}

int main() {
    double *userInput;

    userInput = getUserInput();

    if (userInput != nullptr) {
        cout << "Вы ввели: " << *userInput << endl;
        freeMemory(userInput);
    }

    return 0;
}

