#include <iostream>
#include <string>

using namespace std;

int add(int oneVariable, int twoVariable)
{
    return oneVariable+twoVariable;
}

double add(double oneVariable, double twoVariable)
{
    return oneVariable+twoVariable;
}

string add(string oneVariable, string twoVariable)
{
    return oneVariable+twoVariable;
}

int main()
{
    int one = 1;
    int two = 2;

    cout << add(one,two) << endl;
    return 0;
}
