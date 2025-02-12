#include <iostream>

using namespace std;

int factorialNumber(int number, unsigned long long int result = 1)
{
    if(number == 1) {
        return result;
    }
    return factorialNumber(number-1, result*number);

}

int main()
{
    cout << factorialNumber(5) << endl;
    return 0;
}
