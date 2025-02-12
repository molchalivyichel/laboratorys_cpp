#include <iostream>
#include <Windows.h>
#include "account.h"

int currentAccount = 0;

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    Account one{"Max", 4384981,"371","PivnaiBochka",10000};
    Account two{"Igor", 3487127,"322","Lichinka",0};

    one.printBalance();
    two.printBalance();

    one.deposit(two,10000);
    one.printBalance();
    two.printBalance();

    cout << "CurrentAccount: " << currentAccount << endl;
    return 0;
}
