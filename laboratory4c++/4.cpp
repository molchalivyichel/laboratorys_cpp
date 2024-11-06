#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int massive[size] = {0};
    
    for(int i = 0, g = 1; i < size; i++, g+=2)
    {
        *(massive+i) = g;
    }
    
    for(int i = 0; i < size; i++)
    {
        if (i % 5 == 0 && i != 0) {
            cout << endl;
        }
        cout << *(massive+i) << " ";
    }
    cout << endl;
    cout << "So, 2 for" << endl;
    
    for(int i = size-1, g = 0; i >= 0; --i, g++)
    {
        if (g % 5 == 0 && g != 0) {
            cout << endl;
        }
        cout << *(massive+i) << " ";
    }
    
    return 0;
}
