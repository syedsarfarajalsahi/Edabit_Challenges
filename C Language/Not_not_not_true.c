// Not Not Not True
#include <stdio.h>
#include <string.h>

void not_not_not_true(int number_of_times, char true_or_false[])
{

    int is_even = (number_of_times % 2) ? 0 : 1;
    if (strcmp(true_or_false, "true") == 0)
        printf("%s", is_even ? "true" : "false");
    else if (strcmp(true_or_false, "false") == 0)
        printf("%s", is_even ? "false" : "true");
}

int main()
{
    char true_false[] = "false";
    int number_of_times = 2;
    not_not_not_true(number_of_times, true_false);
}