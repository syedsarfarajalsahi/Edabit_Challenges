// Next Perfect Square
#include <stdio.h>
#include <math.h>

int next_Square(int squared_number)
{
    double sqrt_number = sqrt(squared_number);
    if (floor(sqrt_number) == sqrt_number)
    {
        return pow(sqrt_number + 1, 2);
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n = 196;
    printf("%d", next_Square(n));
}