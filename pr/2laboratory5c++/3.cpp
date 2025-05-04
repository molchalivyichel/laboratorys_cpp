#include <iostream>
#include <new>

using namespace std;

// Функция для выделения памяти и чтения элементов массива от пользователя
int* createArray(int& size) {
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

    // Чтение элементов массива от пользователя
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Элемент " << i << ": ";
        cin >> array[i];
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

// Функция для изменения размера массива и копирования данных
void resizeArray(int*& oldArray, int& oldSize, int newSize) {
    // Динамическое выделение памяти для нового массива
    int* newArray = new (nothrow) int[newSize];
    if (newArray == nullptr) {
        cerr << "Ошибка: память для нового массива не может быть выделена." << endl;
        delete oldArray; // Освобождение памяти старого массива в случае ошибки
        return;
    }

    // Копирование старых данных в новый массив
    for (int i = 0; i < newSize && i < oldSize; ++i) {
        newArray[i] = oldArray[i];
    }

    // Освобождение памяти старого массива
    delete oldArray;

    // Обновление указателя и размера
    oldArray = newArray;
    oldSize = newSize;
}

int main() {
    int initialSize, newSize;

    // Запрос у пользователя начального размера массива
    cout << "Введите начальный размер массива: ";
    cin >> initialSize;

    // Создание и заполнение начального массива
    int* array = createArray(initialSize);

    // Проверка на успешное создание массива
    if (array != nullptr) {
        // Запрос у пользователя нового размера массива
        cout << "Введите новый размер массива: ";
        cin >> newSize;

        // Изменение размера массива и копирование данных
        resizeArray(array, initialSize, newSize);

        // Вывод нового массива на экран
        cout << "Новый массив: ";
        printArray(array, initialSize);

        // Освобождение памяти нового массива
        delete array;
    }

    return 0;
}
