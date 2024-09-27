#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    char symbole = 'b';
    int count = -1;

    do {
        cout << "Введите символ: ";
        cin >> symbole;
        count++;
    } while (symbole != '.');

    cout << "Количество символов составляет " << count << endl;

    
    return 0;
}
