#include <iostream>
#include <string>

using namespace std;

// ��������� Person � ������ name � age
struct Person {
	std::string* name;
	int* age;
};

// ������� ��� �������� ������� Person
Person* createPerson() {
	Person* person = new Person{};

	// �������� �� �������� ��������� ������ ��� ��������� Person
	if (person == nullptr) {
		cout << "������: ������ ��� Person �� ����� ���� ��������" << endl;
		return nullptr;
	}

	// ������������ ��������� ������ ��� ���� name
	person->name = new (nothrow) std::string;
	if (person->name == nullptr) {
		cout << "������: ������ ��� name �� ����� ���� ��������" << endl;
		delete person; // ����������� ������ ��� Person � ������ ������
		return nullptr;
	}

	// ������������ ��������� ������ ��� ���� age
	person->age = new (nothrow) int;
	if (person->age == nullptr) {
		cout << "������: ������ ��� age �� ����� ���� ��������" << endl;
		delete person->name; // ����������� ������ ��� name
		delete person; // ����������� ������ ��� Person � ������ ������
		return nullptr;
	}

	// ������ ����� � ������������
	cout << "������� ���: ";
	cin >> *person->name;

	// ������ �������� � ������������
	cout << "������� �������: ";
	cin >> *person->age;

	return person;
}

// ������� ��� ������������ ������, ���������� ��� Person
void freePersonMemory(Person* person) {
	if (person != nullptr) {
		delete person->name; // ����������� ������ ��� name
		delete person->age; // ����������� ������ ��� age
		delete person; // ����������� ������ ��� Person
	}
}

int main() {
	Person* person = createPerson();

	// �������� �� �������� �������� ������� Person
	if (person != nullptr) {
		// ����� ����� � �������� �� �����
		cout << "���: " << *person->name << endl;
		cout << "�������: " << *person->age << endl;

		// ������������ ������
		freePersonMemory(person);
	}

	return 0;
}
