#include <iostream>
#include <memory>
#include <vector>
#include <random>

// ������� ��� �������� ������� ��������� �����
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

// ������� ��� ������ �������
void printArray(const std::shared_ptr<std::vector<int>>& arr) {
    for (int i = 0; i < arr->size(); i++) {
        std::cout << (*arr)[i] << " ";
    }
    std::cout << std::endl;
}

// ������� ��� ����������� ������� (��������� �� 2)
void modifyArray(const std::shared_ptr<std::vector<int>>& arr) {
    for (int i = 0; i < arr->size(); i++) {
        (*arr)[i] *= 2;
    }
}

int main() {
    int size = 5;

    // ������� ������ shared_ptr
    auto array1 = createRandomArray(size);

    std::cout << "�������� ������: ";
    printArray(array1);

    // ������� ������ shared_ptr, ����������� �� ��� �� ������
    auto array2 = array1;

    std::cout << "���������� ����������: " << array1.use_count() << std::endl;

    // ������������ ������
    modifyArray(array1);

    std::cout << "���������� ������: ";
    printArray(array2);

    // ����������� ���� �� ����������
    array2.reset();

    std::cout << "���������� ���������� ����� ������: " << array1.use_count() << std::endl;

    return 0;
}
