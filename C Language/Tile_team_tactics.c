// Tile Team Tactics
#include <stdio.h>

/*
Rule:
1. if a < b & 0 < b - a < 6 --> true
2. if a < b & b - a > 6 --> false
3. if a > b --> false
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