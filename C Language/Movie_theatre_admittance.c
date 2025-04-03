// Movie Theatre Admittance

#include <stdio.h>
#include <string.h>

void accept_into_movie(int age, char is_supervised[])
{
    if (age >= 15 || strcmp(is_supervised, "true") == 0)
        printf("true");
    else
        printf("false");
}

int main()
{
    int age = 15;
    char is_supervise[] = "true";
    accept_into_movie(age, is_supervise);
}