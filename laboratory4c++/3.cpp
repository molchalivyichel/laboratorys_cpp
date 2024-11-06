#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int massive[size] = {0,1,2,3,4,5,6,7,8,9};
    const int* first_element = massive;
    
    for(int i = 0; i < size; i++)
    {
        cout << *first_element++ << " ";
    }
    
    return 0;
}
