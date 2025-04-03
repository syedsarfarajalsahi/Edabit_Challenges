// Return the last element of the Array

#include <stdio.h>

int get_last_item(int num_arr[], int size)
{
    return num_arr[size - 1];
}

int main()
{
    int any_number_array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(any_number_array) / sizeof(any_number_array[0]);
    printf("%d is the last element of the given array.", get_last_item(any_number_array, size));
}