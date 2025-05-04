#include <iostream>
#include <string>

using namespace std;

void cinVariablesTwo(int* oneVariable, int* twoVariable)
{
    string tempOne = "";
    string tempTwo = "";
    int tempi = 0;
    bool check = false;
    bool checkTempOne = false;
    bool checkTempTwo = false;

    string temp = " ";
    getline(std::cin, temp);

    for (; tempi < temp.size(); tempi++)
    {
        if (temp[tempi] == ' ' && check == true) {
            break;
        } 
        if (temp[tempi] != ' ') {
            check = true;
            checkTempOne = true;
            tempOne+= temp[tempi];
        }
    }
    check = false;

    for (; tempi < temp.size(); tempi++)
    {
        if (temp[tempi] == ' ' && check == true) {
            break;
        } 
        if (temp[tempi] != ' ') {
            check = true;
            checkTempTwo = true;
            tempTwo+= temp[tempi];
        }
    }

    if (checkTempOne == true) {
        *oneVariable = stoi(tempOne);
    }
    else {
        *oneVariable = 2;
    }

    if (checkTempTwo == true) {
        *twoVariable = stoi(tempTwo);
    }
    else {
        *twoVariable = 2; // Мдэм)
    }
}

float degree(int number, int degreeNumber = 2)
{
    if (degreeNumber == 1) {
        return number;
    }
    else {
        return degree(number*number, degreeNumber-1);
    }
}

int main()
{
    int one;
    int two;
    cinVariablesTwo(&one,&two);

    cout << degree(one, two) << endl;
    
    return 0;
}
