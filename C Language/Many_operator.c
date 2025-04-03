// Many signerators!

#include <stdio.h>
#include <string.h>

int signerate(int num1, int num2, char sign)
{
    switch (sign)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        return num1 / num2;
    case '%':
        return num1 % num2;
    default:
        return 0;
    }
}

int main()
{
    int num1 = 20, num2 = 3;
    printf("%d", signerate(num1, num2, '%'));
}