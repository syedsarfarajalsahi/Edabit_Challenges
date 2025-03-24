// Array Indexing

#include <stdio.h>

int value_at(int num_array[], int index){
    return num_array[index];
}

int main(){
    int num_array[] = {1,2,3,4,5,6,7,8,9,10}, index = 3.3/3;
    printf("%d", value_at(num_array, index));
}