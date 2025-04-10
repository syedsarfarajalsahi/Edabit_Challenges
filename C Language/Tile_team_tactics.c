// Tile Team Tactics
#include <stdio.h>

/*
Rule:
1. if a == b --> false
2. if a < b & b - a <= 6 --> true
*/

void possible_bonus(int a, int b)
{
    if (a < b && b - a <= 6)
        printf("true\n");
    else
        printf("false\n");
}

int main()
{
    int a = 3, b = 7;
    possible_bonus(a, b);
}