#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    string start_word = "Введите свой вес (кг): ";
    string start_word2 = "Введите свой рост (см): ";
    string start_word3 = "Ваш индекс массы составляет: ";
    float massa = 0;
    float height = 0;

    cout << start_word << endl;
    cin >> massa;
    cout << start_word2 << endl;
    cin >> height;
    height = height/100;
    cout << start_word3 << massa / (height * height) << endl;
    return 0;
}

