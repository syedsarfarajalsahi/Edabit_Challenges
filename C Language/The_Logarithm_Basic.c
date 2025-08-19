#include <stdio.h>
#include <math.h>

void logarithm(int base, int given_number)
{
    int result = log(given_number) / log(base);
    printf("%d", result);
}

int main()
{
    logarithm(2, 4);
}