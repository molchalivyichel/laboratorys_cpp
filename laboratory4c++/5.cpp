#include <iostream>
using namespace std;

int main()
{
    int size = 20;
    int massive[size] = {0};
    
    for(int i = 0, g = 1; i < size; i++, g+=2)
    {
        *(massive+i) = g;
    }
    
    int* pmassive = massive;
    for(int i = 0; i < size; i++)
    {
        if (i % 5 == 0 && i != 0) {
            cout << endl;
        }
        cout << *pmassive++ << " ";
    }
    cout << endl;
    cout << "So, 2 for" << endl;
    *pmassive--;
    
    for(int i = size-1, g = 0; i >= 0; i--, g++)
    {
        if (g % 5 == 0 && g != 0) {
            cout << endl;
        }
        cout << *pmassive-- << " ";
    }
    
    return 0;
}

//Если не будет работать из-за бреда Online C++, есть аналогичное решение задания, которое сделано: https://github.com/molchalivyichel/lesson_notes/blob/main/some_zadania/2ykazateli_xd.cpp
