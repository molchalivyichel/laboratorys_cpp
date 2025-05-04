#include <iostream>
#include <string>

using namespace std;

const void printUnsertMassive(const string& massive, int count)
{
    for(int i = count-1; i >= 0; i--)
    {
        cout << massive[i];
    }
}

int main()
{
    string str = "";
    cout << "Введите строку: ";
    cin >> str;
    
    printUnsertMassive(str, str.size());

    return 0;
}
