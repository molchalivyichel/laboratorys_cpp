#include <iostream>

class Integer
{
public:
    Integer(int number)
    {
        value = number;
    }

    // Конструктор копирования
    Integer(const Integer& other)
    {
        std::cout << "Конструктор копирования вызван\n";
        value = other.value;
    }

    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main()
{
    // Создаем первый объект
    Integer first(42);
    std::cout << "Первый объект:\n";
    first.print();

    // Создаем копию
    Integer second(first);
    std::cout << "\nВторой объект (копия):\n";
    second.print();

    return 0;
}
