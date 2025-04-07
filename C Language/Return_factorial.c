// Return Factorial
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int any_number = 12;
    printf("%d! == %d", any_number, factorial(any_number));
}