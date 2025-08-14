#include <stdio.h>

int trailing_zero(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 5;
        count += n;
    }
    return count;
}

int main()
{
    int n = 1000;
    printf("%d", trailing_zero(n));
}