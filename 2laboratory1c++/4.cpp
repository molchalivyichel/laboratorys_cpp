#include <iostream>

using namespace std;

void swap(auto* oneVariable, auto* twoVariable)
{
    auto* temp = oneVariable;
    oneVariable = twoVariable;
    twoVariable = temp;
}

int main()
{
    string oneVariable = "10";
    string twoVariable = "20";

    cout << oneVariable << " " << twoVariable << endl;

    swap(oneVariable, twoVariable);
    
    cout << oneVariable << " " << twoVariable << endl;
    return 0;
}
