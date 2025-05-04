#include <iostream>
#include <string>

using namespace std;

// ����� Book � ����� title
class Book {
private:
    std::string* title;

public:
    // �����������
    Book() {
        title = new std::string;
    }

    // ����������
    ~Book() {
        delete title;
    }

    // ����� ��������� ��������
    void setTitle(const std::string& newTitle) {
        *title = newTitle;
    }

    // ����� ��������� ��������
    std::string getTitle() const {
        return *title;
    }
};

int main() {
    // �������� ������������� ������� Book
    Book* book = new Book;

    // ��������� �������� �����
    book->setTitle("1984");

    // ����� �������� �����
    cout << "�������� �����: " << book->getTitle() << endl;

    // ������������ ������
    delete book;

    return 0;
}
