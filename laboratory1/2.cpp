#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    string start_word = "Впишите радиус круга. Введите значение: ";
    double vallue = 0;
    cout << start_word;
    cin >> vallue;
    cout << 3.14 * vallue * vallue << endl;
    return 0;
}

