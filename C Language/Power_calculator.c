// Power Calculator

#include<stdio.h>

int circuitPower(int voltage, int current){
    int power = voltage * current;
    return power;
}

int main(){
    int volt = 230, amp = 10;
    printf("Power: %d watt", circuitPower(volt, amp));
}