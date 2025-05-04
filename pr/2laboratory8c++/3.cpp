#include <iostream>

class Integer
{
public:
    Integer(int number)
    {
        value = number;
    }

    // ����������� �����������
    Integer(const Integer& other)
    {
        std::cout << "����������� ����������� ������\n";
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
    // ������� ������ ������
    Integer first(42);
    std::cout << "������ ������:\n";
    first.print();

    // ������� �����
    Integer second(first);
    std::cout << "\n������ ������ (�����):\n";
    second.print();

    return 0;
}
