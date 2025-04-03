// Less than 100 Array Remix

#include <stdio.h>

void array_less_than_100(int arr[2])
{
    int sum = arr[0] + arr[1];
    if (sum < 100)
        printf("true");
    else
        printf("false");
}

int main()
{
    int num_array[2] = {0};
    array_less_than_100(num_array);
}