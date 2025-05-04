#include <iostream>

using namespace std;

void shiftArray(int* massive, int count, int position)
{
    int tempMassive[count]{};
    for (int i = 0; i < count; i++)
    {
        tempMassive[i] = massive[i];
    }

    for(;position >= count;)
    {
        position -= count;
    }

    for(int i = 0; i < count && position != 0; i++)
    {
        if (i-position < 0) {
            massive[i] = tempMassive[count+i-position];
        }
        else {
            massive[i] = tempMassive[i-position];  
        }

    }
}

void printMassive(int* massive, unsigned int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << massive[i] << " ";
    }
    cout << endl;
}

int main()
{
    int count = 10;
    int massive[count]{0,1,2,3,4,5,6,7,8,9};
    int position = 1;

    printMassive(massive, count);

    shiftArray(massive, count, position);
    
    return 0;
}
