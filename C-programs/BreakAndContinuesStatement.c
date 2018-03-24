//

// Created by arjun patidar on 12/03/18.
//

#include <stdio.h>


int main(){
    int j;
    for (j = 0; j < 10; ++j){
        if(j==3){
            continue;
        }
        if(j==5) {
            break;
        }
        printf("\t%d",j);
    }
}


