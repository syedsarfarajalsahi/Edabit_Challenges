// Divides evenly
#include<stdio.h>

void divides_evenly(int num1, int num2){
    if(num1%num2 == 0){
        printf("true");
    }
    else{
        printf("false");
    }
}

int main(){
    int a = 85, b = 4;
    divides_evenly(a, b);
}