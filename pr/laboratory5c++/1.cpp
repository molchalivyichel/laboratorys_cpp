#include <iostream>
using namespace std;

bool check_number(int number, int start, int end)
{
    bool result = false;
    if (start >= number <= end)
    {
        result = true;
    }
    return result;
}

float calculate(int first_number, int too_number, char symbole, int start = -100, int end = 100)
{
    float result = 0;
    if (check_number(first_number, start, end) && check_number(too_number, start, end) == true) {
        if (symbole == '+'){
            result = first_number + too_number;
        }
        else if (symbole == '-'){
            result = first_number - too_number;
        }
        else if (symbole == '*'){
            result = first_number * too_number;
        }
        else if (symbole == '/'){
            result = first_number / too_number;
        }
        else{
            cout << "Need true symbole" << endl;
        }
    }
    else {
        cout << "Error" << endl;        
    }
    return result;
}

int main()
{
    cout << calculate(100,3,'-') << endl;
    cout << calculate(100,3,'+') << endl;
    cout << calculate(100,3,'*') << endl;
    cout << calculate(1,0,'/') << endl;
    return 0;
}
