// Similar Bread

#include <stdio.h>
#include <string.h>

void has_similar_bread(char ingredient_1[3][20], char ingredient_2[3][20])
{
    if (strcmp(ingredient_1[0], ingredient_2[0]) == 0 && strcmp(ingredient_1[2], ingredient_2[2]) == 0)
    {
        printf("true");
    }
    else
        printf("false");
}

int main()
{
    char ingredient_1[3][20] = {"white bread", "lettuce", "white bread"}, ingredient_2[3][20] = {"white bread", "lettuce", "white bread"};
    has_similar_bread(ingredient_1, ingredient_2);
}