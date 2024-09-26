#include <iostream>
#include <string>

using namespace std;

//0-255.0-255.0-255-RGB
//00-FF.00-FF.00-FF-HEX
//по сути перевод из 16 в 10 системы счисления и наоборот
//0x или 0X перед числом для шестнадцатиричной системы
//

int type_number(string words)
{
    int number = 0;
    cout << words;
    cin >> number;
    return number;
}

string Check_16(int number)
{
    if (number == 10)
       return "A";
    if (number == 11)
       return "B";   
    if (number == 12)
       return "C";
    if (number == 13)
       return "D";
    if (number == 14)
       return "E"; 
    if (number == 15)
       return "F";
    else
       return to_string(number);
}

string Conversion_10_to_16(int number) 
{
    int number_one = number;

    number_one /= 16;
    int number_to = number-number_one*16;

    string finish_number = Check_16(number_one)+Check_16(number_to);

    return finish_number;
}

void Print_RGB_in_HEX(int numbers[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << Conversion_10_to_16(numbers[i]);
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");
    int numbers[3] = {0, 0, 0};

    numbers[0] = type_number("Введите первое число: ");
    numbers[1] = type_number("Введите второе число: ");
    numbers[2] = type_number("Введите третье число: ");

    bool check = true;

    for (int i = 0; i < 3 && check == true; i++)
    {
        if ((numbers[i] >= 0 && numbers[i] <= 255) == false)
        {
            check = false;
        }
    }
    if (check == true)
    {
        Print_RGB_in_HEX(numbers);
    }
    return 0;
}
