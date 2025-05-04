#include <iostream>

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

// Функция для удаления всех вхождений указанного числа из массива
void removeElement(int*& array, int& size, int element) {
    int* newArray = new (nothrow) int[size];
    if (newArray == nullptr) {
        cerr << "Ошибка: память для нового массива не может быть выделена." << endl;
        delete array;
        return;
    }

    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] != element) {
            newArray[newSize] = array[i];
        }
    }

    // Освобождение памяти старого массива
    delete array;

    // Обновление указателя и размера
    array = newArray;
    size = newSize;
}

int main() {
    int size, elementToRemove;

    // Запрос у пользователя размера массива
    cout << "Введите размер массива: ";
    cin >> size;

    // Создание и заполнение массива
    int* array = createArray(size);

    // Проверка на успешное создание массива
    if (array != nullptr) {
        // Вывод исходного массива
        cout << "Исходный массив: ";
        printArray(array, size);

        // Запрос у пользователя числа для удаления
        cout << "Введите число, которое нужно удалить из массива: ";
        cin >> elementToRemove;

        // Удаление всех вхождений указанного числа
        removeElement(array, size, elementToRemove);

        // Вывод нового массива
        cout << "Новый массив после удаления: ";
        printArray(array, size);

        // Освобождение памяти нового массива
        delete array;
    }

    return 0;
}
