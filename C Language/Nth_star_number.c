// Nth Star Number

#include <stdio.h>

int star_number(int n)
{
    return 6 * n * (n - 1) + 1;
}

int main()
{
    int n = 5;
    printf("%d", star_number(n));
}