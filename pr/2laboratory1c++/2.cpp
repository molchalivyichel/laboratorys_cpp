#include <iostream>

using namespace std;

float degreeNumber(int number, int degree) 
{
    float result = number;
    bool check = false;

    if (degree == 0) {
        result = 1;
    }
    else {
        if(degree < 0){
            degree = -degree;
            check = true;
        }
        for (;degree > 1; degree--)
        {
            result *= number;
        }      
        if (check == true) {
            result = 1/result;
        }
    }
    return result;
}

int main()
{
    cout << degreeNumber(5,-2);
    return 0;
}
