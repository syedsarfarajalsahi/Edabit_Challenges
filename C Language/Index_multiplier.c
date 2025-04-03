// Index Multiplier
#include <stdio.h>

int index_multiplier(int array[])
{
    int products = 0, i = 0;
    while (array[i] != -1)
    {
        products += array[i] * i;
        i++;
    }
    return products;
}

int main()
{
    int num_arr[] = {1, 2, 3, 4, 5, -1};
    // Here I use sentinel value -> (-1)
    printf("%d", index_multiplier(num_arr));
}