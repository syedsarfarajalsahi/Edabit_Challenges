// A Simple Pair
#include <stdio.h>

void simple_pair(int num_arr[3], int n)
{
    int pair[2];
    int flag;
    if (n == num_arr[0] * num_arr[1])
    {
        flag = 1;
    }
    else if (n == num_arr[1] * num_arr[2])
    {
        flag = 2;
    }
    else if (n == num_arr[0] * num_arr[2])
    {
        flag = 3;
    }
    else
    {
        flag = 4;
    }
    switch (flag)
    {
    case 1:
        pair[0] = num_arr[0];
        pair[1] = num_arr[1];
        break;
    case 2:
        pair[0] = num_arr[1];
        pair[1] = num_arr[2];
        break;
    case 3:
        pair[0] = num_arr[0];
        pair[1] = num_arr[2];
        break;
    case 4:
        pair[0] = 0;
        pair[1] = 0;

    default:
        break;
    }
    printf("[%d, %d]", pair[0], pair[1]);
}

int main()
{
    int num_arr[3] = {1, 2, 3};
    int n = 9;
    simple_pair(num_arr, n);
}