#include <iostream>
#include "math_function.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    int one, two, result = 0;
    char symbole = '_';

    cout << "Введите два числа (По умолчанию 0): ";
    cinVariablesTwo(&one, &two);
    cout << "Выберите операцию (+, -, *): ";
    cin >> symbole;

    if (symbole == '+') {
        result = doOperation(addition, one, two);
    } 
    else if (symbole == '-') {
        result = doOperation(subtraction, one, two);
    }
    else if (symbole == '*') {
        result = doOperation(multiplication, one, two);
    }
    else {
        cout << "Операция не найдена" << endl;
        result = 0;
    }

    cout << "Результат: " << result << endl;

}