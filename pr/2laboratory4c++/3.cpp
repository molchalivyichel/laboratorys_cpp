#include <iostream>
#include <string>

using namespace std;

// Структура Person с полями name и age
struct Person {
	std::string* name;
	int* age;
};

// Функция для создания объекта Person
Person* createPerson() {
	Person* person = new Person{};

	// Проверка на успешное выделение памяти для структуры Person
	if (person == nullptr) {
		cout << "Ошибка: память для Person не может быть выделена" << endl;
		return nullptr;
	}

	// Динамическое выделение памяти для поля name
	person->name = new (nothrow) std::string;
	if (person->name == nullptr) {
		cout << "Ошибка: память для name не может быть выделена" << endl;
		delete person; // Освобождаем память для Person в случае ошибки
		return nullptr;
	}

	// Динамическое выделение памяти для поля age
	person->age = new (nothrow) int;
	if (person->age == nullptr) {
		cout << "Ошибка: память для age не может быть выделена" << endl;
		delete person->name; // Освобождаем память для name
		delete person; // Освобождаем память для Person в случае ошибки
		return nullptr;
	}

	// Запрос имени у пользователя
	cout << "Введите имя: ";
	cin >> *person->name;

	// Запрос возраста у пользователя
	cout << "Введите возраст: ";
	cin >> *person->age;

	return person;
}

// Функция для освобождения памяти, выделенной для Person
void freePersonMemory(Person* person) {
	if (person != nullptr) {
		delete person->name; // Освобождаем память для name
		delete person->age; // Освобождаем память для age
		delete person; // Освобождаем память для Person
	}
}

int main() {
	Person* person = createPerson();

	// Проверка на успешное создание объекта Person
	if (person != nullptr) {
		// Вывод имени и возраста на экран
		cout << "Имя: " << *person->name << endl;
		cout << "Возраст: " << *person->age << endl;

		// Освобождение памяти
		freePersonMemory(person);
	}

	return 0;
}
