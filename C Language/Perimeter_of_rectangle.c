// Find the perimeter of a Rectangle
#include<stdio.h>

int findPerimeter(int side1, int side2){
    int perimeter = 2 * (side1 + side2);
    return perimeter;
}

int main(){
    int side1 = 6, side2 = 7;
    printf("Perimeter of the rectangle: %d", findPerimeter(side1, side2));
}