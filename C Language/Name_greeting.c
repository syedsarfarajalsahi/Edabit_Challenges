// Name Greeting!
#include <stdio.h>

void hello_name(char name[])
{
    printf("Hello %s!", name);
}

int main()
{
    char name[] = "Syed";
    hello_name(name);
}