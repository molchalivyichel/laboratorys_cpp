#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int massive[size] = {0};
    
    for(int i = 0; i < size; i++)
    {
        cout << *(massive + i) << " ";
        *(massive + i) = i;
    }
    cout << endl;
    cout << "End edit" << endl;
    
    for(int i = 0; i < size; i++)
    {
        cout << *(massive + i) << " ";
    }
    
    return 0;
}
