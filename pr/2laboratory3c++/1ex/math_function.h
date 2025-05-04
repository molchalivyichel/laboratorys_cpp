#ifndef MATH_FUNCTION_H  
#define MATH_FUNCTION_H

int maxMassive(int* massive, int count);

int minMassive(int* massive, int count);

int sumMassive(int* massive, int count);

int doOperation(int(*op)(int*,int),int* massive, int count);

#endif