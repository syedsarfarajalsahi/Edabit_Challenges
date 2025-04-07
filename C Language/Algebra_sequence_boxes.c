// Algebra Sequence — Boxes
#include <stdio.h>

int box_seq(int steps)
{
    if (steps % 2 == 0)
        return steps;
    else
        return steps + 2;
}

int main()
{
    int steps = 5;
    printf("%d", box_seq(steps));
}