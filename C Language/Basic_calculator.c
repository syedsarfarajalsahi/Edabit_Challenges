#include <stdio.h>

int basic_calculator(int a, char calculation_sign, int b)
{
    switch (calculation_sign)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b != 0)
            return a / b;
        return 0;
    default:
        return 0;
    }
}

int main()
{
    int a = 4, b = 2, result;
    char calculation_sign = '/';
    result = basic_calculator(a, calculation_sign, b);
    printf("The value of %d %c %d = %d", a, calculation_sign, b, result);
}
