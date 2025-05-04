#include <iostream>
#include <memory>
#include <vector>
#include <random>

// Функция для создания массива случайных чисел
std::shared_ptr<int> createRandomArray(int size) {
    auto arr = std::make_shared<std::vector<int>>(size);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 10);

    for (int i = 0; i < size; i++) {
        (*arr)[i] = dis(gen);
    }
    return arr;
}

// Функция для вывода массива
void printArray(const std::shared_ptr<std::vector<int>>& arr) {
    for (int i = 0; i < arr->size(); i++) {
        std::cout << (*arr)[i] << " ";
    }
    std::cout << std::endl;
}

// Функция для модификации массива (умножение на 2)
void modifyArray(const std::shared_ptr<std::vector<int>>& arr) {
    for (int i = 0; i < arr->size(); i++) {
        (*arr)[i] *= 2;
    }
}

int main() {
    int size = 5;

    // Создаем первый shared_ptr
    auto array1 = createRandomArray(size);

    std::cout << "Исходный массив: ";
    printArray(array1);

    // Создаем второй shared_ptr, указывающий на тот же ресурс
    auto array2 = array1;

    std::cout << "Количество владельцев: " << array1.use_count() << std::endl;

    // Модифицируем массив
    modifyArray(array1);

    std::cout << "Измененный массив: ";
    printArray(array2);

    // Освобождаем один из указателей
    array2.reset();

    std::cout << "Количество владельцев после сброса: " << array1.use_count() << std::endl;

    return 0;
}
