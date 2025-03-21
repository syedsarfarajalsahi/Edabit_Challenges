// Convert minutes to seconds

#include<stdio.h>

int convert(int minutes){
    int seconds = minutes * 60;
    return seconds;
}

int main(){
    int minutes = 3;
    printf("%d minutes equals to %d seconds", minutes, convert(minutes));
}