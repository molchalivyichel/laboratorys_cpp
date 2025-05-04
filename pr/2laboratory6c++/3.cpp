#include <iostream>
#include <memory>

int main() {
    // Получаем размер массива от пользователя
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    // Создаем unique_ptr с динамическим массивом
    std::unique_ptr<int[]> arr(new int[size]);

    // Инициализируем элементы квадратами их индексов
    long long sum = 0;  // используем long long для большей точности
    for (int i = 0; i < size; i++) {
        arr[i] = i * i;
        sum += arr[i];
    }

    // Выводим результат
    std::cout << "Массив квадратов индексов:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    std::cout << "Сумма элементов массива: " << sum << std::endl;

    return 0;
}
