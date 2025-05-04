#include <iostream>

using namespace std;

int Sum(int* massive, int count, int temp = 0, int result = 0)
{
    if(temp > count-1) {
        return result;
    }
    return Sum(massive, count, temp+1, result+massive[temp]);

}

int main()
{
    int count = 10;
    int massive[count]{0,1,2,3,4,5,6,7,8,9};

    cout << Sum(massive, count) << endl;
    return 0;
}