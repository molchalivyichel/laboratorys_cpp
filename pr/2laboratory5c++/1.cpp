#include <iostream>

using namespace std;

int main() {
    int size;

    // Запрос у пользователя размера массива
    cout << "Введите размер массива: ";
    cin >> size;

    // Динамическое выделение памяти для массива int
    int* array = new int[size];

    // Инициализация элементов массива квадратами их индексов
    for (int i = 0; i < size; ++i) {
        array[i] = i * i;
    }

    // Вычисление суммы элементов массива
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }

    // Вывод суммы на консоль
    cout << "Сумма элементов массива: " << sum << endl;

    // Освобождение памяти
    delete[] array;

    return 0;
}
