#include <stdio.h>

void colorInvert(int color[3]){
    printf("[");
    for(int i=0;i<3;i++){
        color[i]=255-color[i];
        if(i!=2)
            printf("%d, ");
        else{
            printf("%d");
        }
    }
    printf("]");
}

int main(){
    int color[3] = {165, 170, 221};
    colorInvert(color);
}