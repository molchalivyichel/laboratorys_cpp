#include <iostream>
#include <new>

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

// ������� ��� ��������� ������� ������� � ����������� ������
void resizeArray(int*& oldArray, int& oldSize, int newSize) {
    // ������������ ��������� ������ ��� ������ �������
    int* newArray = new (nothrow) int[newSize];
    if (newArray == nullptr) {
        cerr << "������: ������ ��� ������ ������� �� ����� ���� ��������." << endl;
        delete oldArray; // ������������ ������ ������� ������� � ������ ������
        return;
    }

    // ����������� ������ ������ � ����� ������
    for (int i = 0; i < newSize && i < oldSize; ++i) {
        newArray[i] = oldArray[i];
    }

    // ������������ ������ ������� �������
    delete oldArray;

    // ���������� ��������� � �������
    oldArray = newArray;
    oldSize = newSize;
}

int main() {
    int initialSize, newSize;

    // ������ � ������������ ���������� ������� �������
    cout << "������� ��������� ������ �������: ";
    cin >> initialSize;

    // �������� � ���������� ���������� �������
    int* array = createArray(initialSize);

    // �������� �� �������� �������� �������
    if (array != nullptr) {
        // ������ � ������������ ������ ������� �������
        cout << "������� ����� ������ �������: ";
        cin >> newSize;

        // ��������� ������� ������� � ����������� ������
        resizeArray(array, initialSize, newSize);

        // ����� ������ ������� �� �����
        cout << "����� ������: ";
        printArray(array, initialSize);

        // ������������ ������ ������ �������
        delete array;
    }

    return 0;
}
