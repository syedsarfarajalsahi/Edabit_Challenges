// A Simple Pair
#include <stdio.h>

void simple_pair(int num_arr[3], int n)
{
    int x = 0, y = 0;

    if (n == num_arr[0] * num_arr[1])
    {
        x = num_arr[0];
        y = num_arr[1];
    }
    else if (n == num_arr[1] * num_arr[2])
    {
        x = num_arr[1];
        y = num_arr[2];
    }
    else if (n == num_arr[0] * num_arr[2])
    {
        x = num_arr[0];
        y = num_arr[2];
    }

    printf("[%d, %d]", x, y);
}

int main()
{
    int num_arr[3] = {1, 2, 3};
    int n = 6;
    simple_pair(num_arr, n);
}