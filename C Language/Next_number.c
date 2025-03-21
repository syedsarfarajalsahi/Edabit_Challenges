// Return the Next Number from the Integer Passed
#include<stdio.h>

int next_number_of(int passed_integer){
    int next_number = passed_integer + 1;
    return next_number;
}

int main(){
    int num = 1;
    printf("Next number to %d is %d", num, next_number_of(num));
}