// Flip the int Boolean
#include<stdio.h>

int flip_int_boolean(int boolean_value){
    if(boolean_value == 1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int bool_value = 1;
    printf("Flipped int boolean of %d is %d", bool_value, flip_int_boolean(bool_value));
}