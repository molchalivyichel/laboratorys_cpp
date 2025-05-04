#include <iostream>
using namespace std;

int countCalls = 0;

int factorial(int n, int g=1)
{
    countCalls += 1;
    if(n == 0){
        return g;
    }
    return factorial(n-1, g*n);    
}

int main()
{
    cout << "Factorial: " << factorial(7) << endl;
    cout << "CountCalls: " << countCalls << endl;
    return 0;
}
