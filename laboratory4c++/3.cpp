#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int const massive[size] = {0};
    
    for(int i = 0; i < size; i++)
    {
        cout << *(massive + i) << " ";
    }
    
    return 0;
}
