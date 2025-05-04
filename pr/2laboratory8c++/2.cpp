#include <iostream>
using namespace std;

// ���������� ������
class Integer {
private:
    int value;

public:
    // ��������� �������
    Integer();
    void setValue(int newValue);
    int getValue() const;
    void printValue() const;
};

// ����������� �������

// �����������
Integer::Integer() {
    cout << "������ ������ ������ Integer" << endl;
    value = 0;
}

// ������� ��������� ��������
void Integer::setValue(int newValue) {
    value = newValue;
}

// ������� ��������� ��������
int Integer::getValue() const {
    return value;
}

// ������� ������ ��������
void Integer::printValue() const {
    cout << "��������: " << value << endl;
}

int main() {
    // ������� ������
    Integer myInteger;

    // �������� ��������� ��������
    cout << "��������� ��������: " << myInteger.getValue() << endl;

    // ������������� ����� ��������
    myInteger.setValue(42);

    // ������� ����� ��������
    myInteger.printValue();

    return 0;
}
