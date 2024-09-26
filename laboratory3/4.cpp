#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[10] = {0};
    string text = "Введите число: ";

    for (int i = 0; i < 10; i++)
    {
        cout << text;
        cin >> numbers[i];
    }
    
    for (int i = 9; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
