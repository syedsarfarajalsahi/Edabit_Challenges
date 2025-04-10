// Word Numbers!
#include <stdio.h>
#include <string.h>

int word(char number_in_word[10])
{
    if (strcmp(number_in_word, "one") == 0)
        return 1;
    else if (strcmp(number_in_word, "two") == 0)
        return 2;
    else if (strcmp(number_in_word, "three") == 0)
        return 3;
    else if (strcmp(number_in_word, "four") == 0)
        return 4;
    else if (strcmp(number_in_word, "five") == 0)
        return 5;
    else if (strcmp(number_in_word, "six") == 0)
        return 6;
    else if (strcmp(number_in_word, "seven") == 0)
        return 7;
    else if (strcmp(number_in_word, "eight") == 0)
        return 8;
    else if (strcmp(number_in_word, "nine") == 0)
        return 9;
    else if (strcmp(number_in_word, "zero") == 0)
        return 0;
}

int main()
{
    char number_in_words[10] = "two";
    if (word(number_in_words) == -1)
        printf("Enter valid input");
    else
        printf("%d", word(number_in_words));
}