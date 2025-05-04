#include <iostream>
#include <string>
#include <new>

using namespace std;

// ����� Car � ����� model
class Car {
public:
    std::string* model;

    // �����������
    Car() {
        model = new (nothrow) std::string;
        if (model == nullptr) {
            cerr << "������: ������ ��� ������ �� ����� ���� ��������" << endl;
            exit(1); // ���������� ��������� � ������ ������
        }
    }

    // ����������
    ~Car() {
        delete model;
    }

    // ����������� �����������
    Car(const Car& other) {
        model = new (nothrow) std::string(*other.model);
        if (model == nullptr) {
            cerr << "������: ������ ��� ������ �� ����� ���� ��������" << endl;
            exit(1); // ���������� ��������� � ������ ������
        }
    }

    // ������� ��� ��������� ������
    void setModel(const std::string& newModel) {
        *model = newModel;
    }

    // ������� ��� ������ ������
    void printModel() const {
        cout << "������: " << *model << endl;
    }
};

int main() {
    // �������� ������������� ������� Car
    Car* car1 = new (nothrow) Car;
    if (car1 == nullptr) {
        cerr << "������: ������ ��� Car �� ����� ���� ��������" << endl;
        return 1;
    }

    // ��������� ������ ��� car1
    car1->setModel("Toyota");

    // �������� ������� ������� Car � �������������� ������������ �����������
    Car car2(*car1);

    // ����� �������
    car1->printModel();
    car2.printModel();

    // ������������ ������ ��� car1
    delete car1;

    return 0;
}
