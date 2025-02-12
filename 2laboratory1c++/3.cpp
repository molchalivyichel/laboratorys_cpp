#include <iostream>

using namespace std;

void minmax(int* massive, unsigned int count, int* massiveMinMax)
{

    for (int i = 1; i < count; i++)
    {
        if (massive[i] < massiveMinMax[0]) {
            massiveMinMax[0] = massive[i];
        } 
        
        else if (massive[i] > massiveMinMax[1]) {
            massiveMinMax[1] = massive[i];
        } 
    }
}

int main()
{
    unsigned int count = 10;
    int massive[count]{-1,11,12,13,14,3000,16,17,18,19};
    int massiveMinMax[2]{massive[0],massive[0]};

    minmax(massive, count, massiveMinMax);

    cout << massiveMinMax[0] << " " << massiveMinMax[1] << endl;

    return 0;
}
