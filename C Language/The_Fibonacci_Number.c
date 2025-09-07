// The Fibonacci Number
#include <stdio.h>

int fibonacci_number(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    else
    {
        return fibonacci_number(n - 1) + fibonacci_number(n - 2);
    }
}

int main()
{
    int num = 3;
    if (num == 0)
        printf("Fibonacci does not start with Zero (0)");
    else
    {
        printf("%d", fibonacci_number(num));
    }
}