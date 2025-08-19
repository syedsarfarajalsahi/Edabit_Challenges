#include <stdio.h>

int collatz(int given_number)
{
    int step = 0;
    while (given_number != 1)
    {
        if (given_number % 2 == 0)
            given_number = given_number / 2;
        else
        {
            given_number = given_number * 3 + 1;
        }
        step++;
    }
    return step;
}

int main()
{
    printf("%d", collatz(5));
    // ignore this part as i was just curious to know whether i can run on loop
    // for (int i = 1; i < 10; i++)
    // {
    //     printf("%d -> %d\n", i, collatz(i));
    // }
}