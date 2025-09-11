// Maximum Edge of a Triangle
#include <stdio.h>

int next_edge(int side1, int side2)
{
    return ((side1 + side2) - 1);
}

int main()
{
    int side1 = 8, side2 = 10;
    printf("%d", next_edge(side1, side2));
}