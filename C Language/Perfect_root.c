#include <stdio.h>
#include <math.h>

void perfect_roots(int any_number)
{
    double n1 = 2, n2 = 4, n3 = 8;

    double sqaure_root = pow(any_number, 1.00 / n1);
    double fourth_root = pow(any_number, 1.00 / n2);
    double eight_root = pow(any_number, 1.00 / n3);

    int isSquareRoot = (sqaure_root - (int)sqaure_root);
    int isFourthRoot = (fourth_root - (int)fourth_root);
    int isEightRoot = (eight_root - (int)eight_root);

    if (isSquareRoot == 0 && isFourthRoot == 0 && isEightRoot == 0)
        printf("True");
    else
        printf("False");
}

int main()
{
    // any_number > 1
    int any_number = 100;
    perfect_roots(any_number);
}