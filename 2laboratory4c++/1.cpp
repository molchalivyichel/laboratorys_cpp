#include <iostream>

using namespace std;

int main() {
    int *dynamicInt;

    dynamicInt = new int{};

    if (dynamicInt == nullptr) {
        cout << "Ошибка: память не может быть выделена" << endl;
        return 1;  
    }

    cout << "Введите целое число: ";
    cin >> *dynamicInt;

    cout << "Вы ввели: " << *dynamicInt << endl;
    delete dynamicInt;

    return 0;
}
