// Even Number Generator
#include <stdio.h>

void find_even_numbers(int given_number)
{
    int even_num_array[100];
    int index = 0;

    for (int i = 1; i <= given_number; i++)
    {
        if (i % 2 == 0)
        {
            even_num_array[index] = i;
            index++;
        }
    }

    printf("[");
    for (int j = 0; j < index; j++)
    {
        printf("%d", even_num_array[j]);
        if (j != index - 1)
            printf(", ");
    }
    printf("]\n");
}

int main()
{
    int any_number = 100;
    find_even_numbers(any_number);
    return 0;
}
