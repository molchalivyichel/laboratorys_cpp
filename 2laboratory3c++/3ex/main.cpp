#include <iostream>
#include "mathlib.h"
#include <Windows.h>

using namespace std;

int countFibonacci = 0;
int countFactorial = 0;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    cout << "Фибоначи числа: " << FibonacciNumber(10) << endl;   
    cout << "Количество вызовов: " << countFibonacci << endl;

    cout << "Факториал числа: " << factorialNumber(10) << endl;
    cout << "Количество вызовов: " << countFactorial << endl;
}