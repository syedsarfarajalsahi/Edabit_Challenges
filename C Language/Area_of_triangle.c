// Area of a Triangle

#include<stdio.h>

int triArea(int base, int height){
    int area = (base * height)/2;
    return area;
}

int main(){
    int base = 3, height = 2;
    printf("Area of the triangle: %d", triArea(base, height));
}