#include <iostream>
#include <memory>
#include <vector>
#include <random>

// ������� ��� �������� ������� ��������� �����
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

// ������� ��� ������ ������������� ��������
int findMax(std::unique_ptr<int[]> arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// ������� ��� �������� ����� ���������
int sumElements(std::unique_ptr<int[]> arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// ������� ��� ���������� ������� ������� ���������
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

// ������� ��� ������ �������
void printArray(std::unique_ptr<int[]> arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 10;

    // ������� ������ ��������� �����
    auto randomArray = createRandomArray(size);
    std::cout << "��������� ������: ";
    printArray(randomArray, size);

    // ������� ������������ �������
    std::cout << "������������ �������: " << findMax(std::move(randomArray), size) << std::endl;

    // ������� ����� ������ ��������� �����
    randomArray = createRandomArray(size);

    // ��������� ����� ���������
    std::cout << "����� ���������: " << sumElements(std::move(randomArray), size) << std::endl;

    // ������� ������ ����� ���������
    auto fibArray = fillFibonacci(size);
    std::cout << "����� ���������: ";
    printArray(fibArray, size);

    return 0;
}
