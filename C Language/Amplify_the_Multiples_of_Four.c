#include <stdio.h>

void amplify(int length_of_array)
{
    int num_array[length_of_array];
    printf("[");
    for (int i = 0; i < length_of_array; i++)
    {
        num_array[i] = i;
        num_array[i] = (i % 4 == 0) ? (i * 10) : i;
        if (i != length_of_array - 1)
            printf("%d, ", num_array[i]);
        else
        {
            printf("%d", num_array[i]);
        }
    }
    printf("]");
}

int main()
{
    int lenght_of_array = 10;
    amplify(41);
}