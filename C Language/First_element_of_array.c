// Return the first element in an array
#include <stdio.h>

int get_first_element(int arr[])
{
    return arr[0];
}

int main()
{
    int num_array[] = {6, 2, 3, 4};
    printf("%d", get_first_element(num_array));
}