#include <iostream>
using namespace std;

class Integer {
private:
    int value;

public:
    // �����������
    Integer() {
        cout << "������ ������ ������ Integer" << endl;
        value = 0;
    }

    // ������� ��������� ��������
    void setValue(int newValue) {
        value = newValue;
    }

    // ������� ��������� ��������
    int getValue() const {
        return value;
    }

    // ������� ������ ��������
    void printValue() const {
        cout << "��������: " << value << endl;
    }
};

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
