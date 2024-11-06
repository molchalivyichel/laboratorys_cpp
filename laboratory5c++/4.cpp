#include <iostream>
#include <random>
using namespace std;

int* random_massive(int start, int end, int len) {
    int* numbers = new int[len];

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(start, end);

    for (int i = 0; i < len; i++) {
        numbers[i] = distrib(gen);
    }

    return numbers; 
}

void booble_sorted(int* numbers, int len)
{
    int number_check = 0;
    while(true)
    {
        for(int i = 0; i < len-1; i++)
        {
            if (numbers[i] > numbers[i+1])
            {
                int tmp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = tmp;
                number_check++;
            }
        }

        if (number_check == 0)
        {
            break;
        }
        number_check = 0;
    }
}

void print_massive(int* massive, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(massive+i) << " ";
    }
    cout << endl;
}

void modifyArray(int* massive, int size)
{
    for(int i = 0; i < size; i++)
    {
        if (*(massive+i) > 0){
            *(massive+i) += 10;
        }
        else if (*(massive+i) < 0){
            *(massive+i) -= 5;
        }
    }
}

int countUnique(int* massive, int size)
{
    int count = 0;
    int current_number = 0;
    for(int i = 0; i < size; ++i)
    {
        //cout << i << " ---------------------------------------------------" << endl;
        if (current_number != *(massive+i) && i != 0)
        {
            count += 1;
            //cout << "Deffect!" << endl;
        }
        //cout << "Current: " << current_number << endl;
        //cout << "Here: " << *(massive+i) << endl;
        current_number = *(massive+i);
    }
    
    return count;
}

int main()
{
    int size = 10;
    //int numbers[size] = {0,0,1,2,3,4,5,6,7,8};
    int* numbers = random_massive(-10,10,size);
    print_massive(numbers, size);
    
    booble_sorted(numbers, size);
    print_massive(numbers, size);

    cout << countUnique(numbers, size) << endl;
    return 0;
}