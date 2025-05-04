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

int findMax(int* numbers, int size, int current_index, int max_element)
{
    if (current_index == size){
        return max_element;
    }
    else if (max_element < numbers[current_index]){
        max_element = numbers[current_index];
    }
    return findMax(numbers, size, current_index+1, max_element);
}

int main()
{
    int size = 10;
    //int numbers[size] = {0,0,0,0,0,0,0,0,0,1};
    int* numbers = random_massive(-10,10,size);
    cout << findMax(numbers, size, 0, numbers[0]);
    return 0;
}
