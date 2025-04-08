// Using the ?: Operator
#include <stdio.h>
#include <stdbool.h>

void yeah_nope(bool true_or_false)
{
    printf("%s", true_or_false == true ? "yeah" : "nope");
}

int main()
{
    bool input = false;
    yeah_nope(input);
}