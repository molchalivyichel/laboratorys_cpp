#include <iostream>

using namespace std;

// ������� ��� ��������� ������ � ������ ��������� ������� �� ������������
int* createArray(int& size) {
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

    // ������ ��������� ������� �� ������������
    cout << "������� �������� �������:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "������� " << i << ": ";
        cin >> array[i];
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

// ������� ��� �������� ���� ��������� ���������� ����� �� �������
void removeElement(int*& array, int& size, int element) {
    int* newArray = new (nothrow) int[size];
    if (newArray == nullptr) {
        cerr << "������: ������ ��� ������ ������� �� ����� ���� ��������." << endl;
        delete array;
        return;
    }

    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] != element) {
            newArray[newSize] = array[i];
        }
    }

    // ������������ ������ ������� �������
    delete array;

    // ���������� ��������� � �������
    array = newArray;
    size = newSize;
}

int main() {
    int size, elementToRemove;

    // ������ � ������������ ������� �������
    cout << "������� ������ �������: ";
    cin >> size;

    // �������� � ���������� �������
    int* array = createArray(size);

    // �������� �� �������� �������� �������
    if (array != nullptr) {
        // ����� ��������� �������
        cout << "�������� ������: ";
        printArray(array, size);

        // ������ � ������������ ����� ��� ��������
        cout << "������� �����, ������� ����� ������� �� �������: ";
        cin >> elementToRemove;

        // �������� ���� ��������� ���������� �����
        removeElement(array, size, elementToRemove);

        // ����� ������ �������
        cout << "����� ������ ����� ��������: ";
        printArray(array, size);

        // ������������ ������ ������ �������
        delete array;
    }

    return 0;
}
