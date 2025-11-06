// Combinations

#include <stdio.h>

int combination(int numlist[], int size)
{
    int result = 1;
    for (int i = 0; i < size; i++)
    {
        result = result * numlist[i];
    }
    return result;
}

int main()
{
    int number_of_items_in_group[] = {2, 3, 4, 5};
    int size = sizeof(number_of_items_in_group) / sizeof(number_of_items_in_group[0]);
    printf("%d", combination(number_of_items_in_group, size));
}