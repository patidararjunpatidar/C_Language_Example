//
// Created by arjun patidar on 24/03/18.
//

#include <stdio.h>

int fib(int n){
    if(n==1 || n==2)
        return (1);
    else
        return (fib(n-1)+fib(n-2));
}
main(){
    int j;
    for (j=1; j<100 ;j++) {
        printf("%d\n",fib(j));
    }
}
