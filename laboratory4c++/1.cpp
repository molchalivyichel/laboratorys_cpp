#include <iostream>

int main()
{
    int values = 0;
    int *values_s = &values;

    std::cout << values << std::endl;

    *values_s = 1;
    
    std::cout << values << std::endl;
    
    return 0;
}
