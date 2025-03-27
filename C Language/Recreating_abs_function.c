// Recreating the abs() Function
#include <stdio.h>

int absolute(int num)
{
    if (num < 0)
        return num * (-1);
    else
        return num;
}

int main()
{
    int num = 1;
    printf("%d", absolute(num));
}