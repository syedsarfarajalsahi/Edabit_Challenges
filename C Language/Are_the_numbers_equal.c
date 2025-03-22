// Are the Numbers Equal?

#include<stdio.h>

void is_equal(int num1, int num2){
    if(num1 == num2){
        printf("True");
    }
    else{
        printf("False");
    }
}

int main(){
    int num1 = 3, num2 = 3;
    is_equal(num1, num2);
}