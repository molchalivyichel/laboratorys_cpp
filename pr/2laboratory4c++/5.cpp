#include <iostream>
#include <string>

using namespace std;

// Класс Book с полем title
class Book {
private:
    std::string* title;

public:
    // Конструктор
    Book() {
        title = new std::string;
    }

    // Деструктор
    ~Book() {
        delete title;
    }

    // Метод установки названия
    void setTitle(const std::string& newTitle) {
        *title = newTitle;
    }

    // Метод получения названия
    std::string getTitle() const {
        return *title;
    }
};

int main() {
    // Создание динамического объекта Book
    Book* book = new Book;

    // Установка названия книги
    book->setTitle("1984");

    // Вывод названия книги
    cout << "Название книги: " << book->getTitle() << endl;

    // Освобождение памяти
    delete book;

    return 0;
}
