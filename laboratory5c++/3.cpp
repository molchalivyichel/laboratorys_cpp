#include <iostream>
#include <random>
using namespace std;

int positive_edit(int number, int modified)
{
    return number + modified;
}

int negative_edit(int number, int modified)
{
    return number - modified;
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

int main()
{
    int size = 10;
    int* numbers = random_massive(-500,500,size);
    print_massive(numbers, size);
    
    modifyArray(numbers, size);
    
    print_massive(numbers, size);    
    return 0;
}
