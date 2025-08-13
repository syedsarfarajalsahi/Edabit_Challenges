#include <stdio.h>

int number_of_solutions(int a, int b, int c)
{
    int D = (b * b) - (4 * a * c);
    if (D > 0)
    {
        return 2;
    }
    if (D == 0)
    {
        return 1;
    }
    if (D < 0)
    {
        return 0;
    }
}

int main()
{
    int a = 1, b = 0, c = 1;
    printf("%d", number_of_solutions(a, b, c));
}