#include <iostream>
#include "math_function.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    int count = 10;
    int massive[count]{-1,11,12,13,14,3000,16,17,18,19};

    cout << "Минимальный элемент: " << doOperation(minMassive,massive, count) << endl;
    cout << "Максимальный элемент: " <<doOperation(maxMassive,massive, count) << endl;
    cout << "Сумма элементов: " <<doOperation(sumMassive,massive, count) << endl;

}