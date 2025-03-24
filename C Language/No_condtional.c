// No conditional swap
#include<stdio.h>

int flip(int num){
    return 1 - num;
}

int main(){
    int num = 0;
    printf("Flip of %d is %d", num, flip(num));
}