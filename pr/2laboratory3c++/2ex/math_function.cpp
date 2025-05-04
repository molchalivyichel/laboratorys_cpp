#include "math_function.h"
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

    if (checkTempTwo == true) {
        *twoVariable = stoi(tempTwo);
    }
}

int addition(int one, int two)
{
    return one+two;
}

int subtraction(int one, int two)
{
    return one-two;
}

int multiplication(int one, int two)
{
    return one*two;
}


int doOperation(int(*op)(int,int),int one, int two)
{
    return op(one, two);
}