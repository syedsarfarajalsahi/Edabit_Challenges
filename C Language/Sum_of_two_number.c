// Return the sum of two numbers

#include <stdio.h>

int addition(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1 = 3, num2 = 2;
    printf("Adding %d and %d is equal to %d", num1, num2, addition(num1, num2));
}