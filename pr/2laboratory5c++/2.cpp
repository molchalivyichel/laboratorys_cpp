#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функция для выделения памяти и заполнения массива случайными числами
int* createRandomArray(int size) {
    // Проверка на неотрицательность размера
    if (size <= 0) {
        cerr << "Ошибка: размер массива должен быть положительным числом." << endl;
        return nullptr;
    }

    // Динамическое выделение памяти для массива
    int* array = new (nothrow) int[size];
    if (array == nullptr) {
        cerr << "Ошибка: память для массива не может быть выделена." << endl;
        return nullptr;
    }

    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(0)));

    // Заполнение массива случайными числами от 1 до 100
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100 + 1;
    }

    return array;
}

// Функция для вывода массива на экран
void printArray(const int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Функция для освобождения памяти
void freeArrayMemory(int* array) {
    delete[] array;
}

int main() {
    int size;

    // Запрос у пользователя размера массива
    cout << "Введите размер массива: ";
    cin >> size;

    // Создание массива и заполнение его случайными числами
    int* array = createRandomArray(size);

    // Проверка на успешное создание массива
    if (array != nullptr) {
        // Вывод массива на экран
        cout << "Массив: ";
        printArray(array, size);

        // Освобождение памяти
        freeArrayMemory(array);
    }

    return 0;
}
