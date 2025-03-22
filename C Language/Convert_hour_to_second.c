// Convert Hour to Second
#include<stdio.h>

int how_many_seconds(int hours){
    int seconds = hours * 3600;
    // 1 hour = 60 min * 60 sec = 3600 sec
    return seconds;
}

int main(){
    int hours = 2;
    printf("%d hours equals to %d seconds", hours, how_many_seconds(hours));
}