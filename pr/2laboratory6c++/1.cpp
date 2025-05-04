#include <iostream>
#include <memory>
#include <vector>
#include <random>

// Функция для создания массива случайных чисел
std::unique_ptr<int[]> createRandomArray(int size) {
    std::unique_ptr<int[]> arr(new int[size]);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < size; i++) {
        arr[i] = dis(gen);
    }
    return arr;
}

// Функция для поиска максимального элемента
int findMax(std::unique_ptr<int[]> arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Функция для подсчета суммы элементов
int sumElements(std::unique_ptr<int[]> arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Функция для заполнения массива числами Фибоначчи
std::unique_ptr<int[]> fillFibonacci(int size) {
    std::unique_ptr<int[]> arr(new int[size]);
    arr[0] = 0;
    if (size > 1) {
        arr[1] = 1;
        for (int i = 2; i < size; i++) {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    }
    return arr;
}

// Функция для вывода массива
void printArray(std::unique_ptr<int[]> arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 10;

    // Создаем массив случайных чисел
    auto randomArray = createRandomArray(size);
    std::cout << "Случайный массив: ";
    printArray(randomArray, size);

    // Находим максимальный элемент
    std::cout << "Максимальный элемент: " << findMax(std::move(randomArray), size) << std::endl;

    // Создаем новый массив случайных чисел
    randomArray = createRandomArray(size);

    // Вычисляем сумму элементов
    std::cout << "Сумма элементов: " << sumElements(std::move(randomArray), size) << std::endl;

    // Создаем массив чисел Фибоначчи
    auto fibArray = fillFibonacci(size);
    std::cout << "Числа Фибоначчи: ";
    printArray(fibArray, size);

    return 0;
}
