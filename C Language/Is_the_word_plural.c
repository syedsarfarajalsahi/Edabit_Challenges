// Is the Word Singular or Plural?
#include <stdio.h>
#include <string.h>

void is_plural(char given_word[])
{
    int length_of_word = strlen(given_word);
    if (given_word[length_of_word - 1] == 's')
        printf("true");
    else
        printf("false");
}
/*
This is an oversimplification of the English language. 
We are ignoring edge cases like "goose" and "geese", "fungus" and "fungi", etc.
*/
int main()
{
    char any_word[20] = "horse";
    is_plural(any_word);
}
