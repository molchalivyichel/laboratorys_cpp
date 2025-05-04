#include <iostream>
#include <string>
#include <random>

using namespace std;

void print_massive(int numbers[], int len)
{
    for(int i = 0; i < len-1; i++)
    {
        cout << numbers[i] << " ";
    }
}

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

int* booble_sorted(int* numbers, int len)
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
            return numbers;
        }
        number_check = 0;
    }
}

int search_index(int* numbers, int element, int len)
{
    int pivot = numbers[len / 2]; 

    if (element == pivot) 
    {
        return len / 2; 
    } 
    else if (element < pivot) 
    {
        return search_index(numbers, element, len / 2);
    } 
    else 
    {
        int rightIndex = search_index(numbers + (len / 2) + 1, element, len - (len / 2) - 1);
        if (rightIndex == -1)
        {
            return -1;
        }
        else
        {
            return rightIndex + (len / 2) + 1;
        }
    }
}

int main(int argc, char const *argv[])
{
    int start = 1;
    int end = 1000;
    int len = 100;

    int* numbers = random_massive(start,end,len);

    cout << "Start_massive: ";
    print_massive(numbers, len);
    cout << endl;

    cout << "Finish_massive: ";
    booble_sorted(numbers, len);
    print_massive(numbers, len);
    cout << endl;

    int element = 0;
    cout << "Write pls number: ";
    cin >> element;
    cout << "Search index: " << search_index(numbers, element,len) << endl;

    delete[] numbers;
    return 0;
}
