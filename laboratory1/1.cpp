#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string start_word = "Перевод из километров в мили. Введите значение: ";
    float vallue = 0;
    cout << start_word;
    cin >> vallue;
    cout << vallue * 0.62137 << " милей" << endl;
    return 0;
}

