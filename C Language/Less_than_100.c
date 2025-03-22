// Check whether the sum of two numbers less than 100

#include<stdio.h>

void less_than_100(int num1, int num2){
    if(num1 + num2 < 100){
        printf("True");
    }
    else{
        printf("False");
    }
}

int main(){
    int num1 = 20, num2 = 30;
    printf("Is sum of %d and %d less than 100?\n", num1, num2);
    less_than_100(num1, num2);
}