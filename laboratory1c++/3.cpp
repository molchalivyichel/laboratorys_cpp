#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    string start_word = "Введите обменный курс: ";
    string start_word2 = "Введите сумму для конвертации: ";
    float course_dollar = 0;
    float rub = 0;

    cout << start_word << endl;
    cin >> course_dollar;
    cout << start_word2 << endl;
    cin >> rub;
    cout << "Sum: " << rub << " rub = " << rub / course_dollar << " $" << endl;
    return 0;
}

