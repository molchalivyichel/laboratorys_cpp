#include <iostream>

using namespace std;

int main() {
    int size;

    // ������ � ������������ ������� �������
    cout << "������� ������ �������: ";
    cin >> size;

    // ������������ ��������� ������ ��� ������� int
    int* array = new int[size];

    // ������������� ��������� ������� ���������� �� ��������
    for (int i = 0; i < size; ++i) {
        array[i] = i * i;
    }

    // ���������� ����� ��������� �������
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }

    // ����� ����� �� �������
    cout << "����� ��������� �������: " << sum << endl;

    // ������������ ������
    delete[] array;

    return 0;
}
