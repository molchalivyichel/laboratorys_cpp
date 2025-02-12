#include "mathlib.h"

extern int countFibonacci;
extern int countFactorial;

int factorialNumber(int number, unsigned long long int result)
{
    countFactorial++;
    if(number == 1) {
        return result;
    }
    return factorialNumber(number-1, result*number);
}

int FibonacciNumber(int number, int result, int tempResult, int count)
{
    countFibonacci++;
    if (number == 0) {
        return 0;
    }
    else if (count == number) {
        return result;
    }
    return FibonacciNumber(number,result+tempResult, result, count+=1);
}