// Sum of Cubes with the limit
#include <stdio.h>
#include <math.h>

int sum_of_cubes(int limit)
{
    int sum_of_cubes = 0;
    for (int i = 1; i <= limit; i++)
    {
        sum_of_cubes += pow(i, 3);
    }
    return sum_of_cubes;
}

int main()
{
    int limit = 10;
    printf("%d", sum_of_cubes(limit));
}