#include <iostream>
#include <memory>

int main() {
    // �������� ������ ������� �� ������������
    int size;
    std::cout << "������� ������ �������: ";
    std::cin >> size;

    // ������� unique_ptr � ������������ ��������
    std::unique_ptr<int[]> arr(new int[size]);

    // �������������� �������� ���������� �� ��������
    long long sum = 0;  // ���������� long long ��� ������� ��������
    for (int i = 0; i < size; i++) {
        arr[i] = i * i;
        sum += arr[i];
    }

    // ������� ���������
    std::cout << "������ ��������� ��������:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    std::cout << "����� ��������� �������: " << sum << std::endl;

    return 0;
}
