#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// ������� ��� ��������� ������ � ���������� ������� ���������� �������
int* createRandomArray(int size) {
    // �������� �� ����������������� �������
    if (size <= 0) {
        cerr << "������: ������ ������� ������ ���� ������������� ������." << endl;
        return nullptr;
    }

    // ������������ ��������� ������ ��� �������
    int* array = new (nothrow) int[size];
    if (array == nullptr) {
        cerr << "������: ������ ��� ������� �� ����� ���� ��������." << endl;
        return nullptr;
    }

    // ������������� ���������� ��������� �����
    srand(static_cast<unsigned int>(time(0)));

    // ���������� ������� ���������� ������� �� 1 �� 100
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100 + 1;
    }

    return array;
}

// ������� ��� ������ ������� �� �����
void printArray(const int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// ������� ��� ������������ ������
void freeArrayMemory(int* array) {
    delete[] array;
}

int main() {
    int size;

    // ������ � ������������ ������� �������
    cout << "������� ������ �������: ";
    cin >> size;

    // �������� ������� � ���������� ��� ���������� �������
    int* array = createRandomArray(size);

    // �������� �� �������� �������� �������
    if (array != nullptr) {
        // ����� ������� �� �����
        cout << "������: ";
        printArray(array, size);

        // ������������ ������
        freeArrayMemory(array);
    }

    return 0;
}
