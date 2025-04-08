// Sum greater than 5 in the array
#include <stdio.h>

int sum_five(int array[], int size)
{
    int sum = 0, i;
    for (i = 0; i < size; i++)
    {
        if (array[i] > 5)
            sum += array[i];
    }
    return sum;
}

int main()
{
    int array[] = {10, 12, 28, 47, 55, 100};
    int array_size = sizeof(array) / sizeof(array[0]);
    printf("%d", sum_five(array, array_size));
}