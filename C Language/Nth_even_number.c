// Nth Even Number

#include <stdio.h>

int nth_even(int n)
{
    return (n - 1) * 2;
}

int main()
{
    int n = 100;
    printf("%d", nth_even(n));
}