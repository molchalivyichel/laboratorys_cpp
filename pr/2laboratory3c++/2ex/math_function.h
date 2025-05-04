#ifndef MATH_FUNCTION_H  
#define MATH_FUNCTION_H

void cinVariablesTwo(int* oneVariable, int* twoVariable);

int addition(int one, int two);

int subtraction(int one, int two);

int multiplication(int one, int two);

int doOperation(int(*op)(int,int),int one, int two);

#endif