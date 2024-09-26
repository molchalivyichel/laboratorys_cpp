#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");
    string start_word = "Введите число: ";
    int number_one = 0;
    int number_too = 0;

    cout << start_word;
    cin >> number_one;

    cout << start_word;
    cin >> number_too;

    int number_test = number_one/number_too;

    if (number_test * number_too == number_one)
        cout << "Числа равны" << endl;
    return 0;
}
