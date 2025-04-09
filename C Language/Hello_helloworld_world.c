// Hello; Hello World; World
#include <stdio.h>

void hello_world(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
        printf("Hello World");
    else if (n % 3 == 0)
        printf("Hello");
    else if (n % 5 == 0)
        printf("World");
    else
        printf("Not divisible by 3 and 5");
}

int main()
{
    int n = 11;
    hello_world(n);
}