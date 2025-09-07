// Pascal Triangle
#include <stdio.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int n_c_r(int n, int r)
{
    return (factorial(n)) / (factorial(r) * factorial(n - r));
}

void pascal_triangle(int n)
{
    int row = 0;
    while (row <= n)
    {
        for (int i = 0; i <= row; i++)
        {
            printf("%d  ", n_c_r(row, i));
        }
        row++;
    }
}

int main()
{
    int n = 4;
    pascal_triangle(n);
}

/*
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
*/