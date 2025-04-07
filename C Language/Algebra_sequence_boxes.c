// Algebra Sequence — Boxes
#include <stdio.h>

int box_seq(int steps)
{
    if (steps % 2 == 0)
        return steps;
    else
        return steps + 2;
}

/*
Here is the rule for this calculation:
1. Step 0: start with 0;
2. Step 1: Add 3;
3. Step 2: Subtract 1
4. Repeat Step 1 & and 2 ...
*/

int main()
{
    int steps = 5;
    printf("%d", box_seq(steps));
}