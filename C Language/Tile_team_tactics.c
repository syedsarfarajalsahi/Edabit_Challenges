// Tile Team Tactics
#include <stdio.h>

/*
Rule:
1. if a == b --> true
2. if a < b & b - a <= 6 --> true
*/

void possible_bonus(int a, int b)
{
    if (b - a >= 0 && b - a <= 6)
        printf("true\n");
    else
        printf("false\n");
}

int main()
{
    int a = 5, b = 3;
    possible_bonus(a, b);
}