// Sum of cubes
#include <stdio.h>
#include <math.h>

// for now i'll do it with 3 element in the parameter array
// i'll do it with variable length later
int sum_of_cubes(int array[3])
{
    return pow(array[0], 3) + pow(array[1], 3) + pow(array[2], 3);
}

int main()
{
    int num_list[3] = {3, 4, 5};
    printf("%d", sum_of_cubes(num_list));
}