// Remainder of the two number
#include <stdio.h>

int remainder_of(int num1, int num2)
{
    int remainder = num1 % num2;
    return remainder;
}

int main()
{
    int num1 = -9, num2 = 45;
    printf("Remainder of the %d and %d is %d", num1, num2, remainder_of(num1, num2));
}