#include <stdio.h>

int square_Areas_Difference(int radius)
{
    return radius * (radius * 2);
}

int main()
{
    int radius = 7;
    printf("%d", square_Areas_Difference(radius));
}