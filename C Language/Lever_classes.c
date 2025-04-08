// First Class, Second Class and Third Class Levers
#include <stdio.h>

void determine_lever(char fulcrum_effort_load[3]){
    if(fulcrum_effort_load[0] == 'e' && fulcrum_effort_load[1] == 'f' && fulcrum_effort_load[2]=='l')
        printf("first class lever");
    else if(fulcrum_effort_load[0] == 'e' && fulcrum_effort_load[1] == 'l' && fulcrum_effort_load[2]=='f')
        printf("second class lever");
    else if(fulcrum_effort_load[0] == 'f' && fulcrum_effort_load[1] == 'e' && fulcrum_effort_load[2]=='l')
        printf("third class lever");
}

int main(){
    char fulcrum_load_effort[3] = {'f', 'e', 'l'};
    determine_lever(fulcrum_load_effort);
}