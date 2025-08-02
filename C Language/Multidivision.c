#include <stdio.h>

void abcmath(int a, int b, int c)
{
    for (int i = 0; i < b; i++)
    {
        a += a;
    }
    if (a % c == 0)
        printf("True");
    else
        printf("False");
}

int main()
{
    int a = 1, b = 2, c = 3;
    abcmath(a, b, c);
}