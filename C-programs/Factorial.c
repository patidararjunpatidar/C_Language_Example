//
// Created by arjun patidar on 24/03/18.
//

#include <stdio.h>
long fact(int n ){
    if(n>0)
        return (n*fact(n-1));
    else
        return 1;

}
main(){
    printf("Factorial of 5 is %d",fact(5));
}

