// Minimal I: Boolean then Boolean
#include <stdio.h>
#include <stdbool.h>

bool is_legal(int age)
{
    return (age >= 18);
}

int main()
{
    int age = 20;
    bool result = is_legal(age);
    printf("%s", result ? "true" : "false");
}