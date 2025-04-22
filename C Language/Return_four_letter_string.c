// Return the Four Letter Strings

#include <stdio.h>
#include <string.h>

void is_four_letters(char given_string[][30], int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        if (strlen(given_string[i]) == 4 && given_string[i] != NULL)
        {
            if (i != size - 1)
                printf("\"%s\", ", given_string[i]);
            else
                printf("\"%s\"", given_string[i]);
        }
    }
    printf("]");
}

int main()
{
    char word_array[][30] = {"Ryan", "Kieran", "Jason", "Matt"};
    int array_size = sizeof(word_array) / sizeof(word_array[0]);
    is_four_letters(word_array, array_size);
}