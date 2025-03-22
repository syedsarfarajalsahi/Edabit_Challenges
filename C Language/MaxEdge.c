// Maximum Edge of a Triangle

#include<stdio.h>

int next_edge(int side1, int side2){
    int max_edge = (side1 + side2) - 1;
    return max_edge;
}

int main(){
    int side1 = 8, side2 = 10;
    printf("Max edge is %d", next_edge(side1, side2));
}