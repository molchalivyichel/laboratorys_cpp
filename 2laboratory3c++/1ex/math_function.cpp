#include "math_function.h"

int maxMassive(int* massive, int count)
{
    int result = massive[0];
    for(int i = 0; i < count; i++)
    {
        if(result < massive[i]) {
            result = massive[i];
        }
    }
    return result;
}

int minMassive(int* massive, int count)
{
    int result = massive[0];
    for(int i = 0; i < count; i++)
    {
        if(result > massive[i]) {
            result = massive[i];
        }
    }
    return result;
}

int sumMassive(int* massive, int count)
{
    int result = 0;
    for(int i = 0; i < count; i++)
    {
        result += massive[i];
    }
    return result;
}

int doOperation(int(*op)(int*,int),int* massive, int count)
{
    return op(massive, count);
}