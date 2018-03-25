//
// Created by arjun patidar on 24/03/18.
//
#include<stdio.h>
#include<memory.h>

void permutation(char *s,int i,int n){
    static int count; int k ;
    if(i==n){
        count++;
        printf("%d,%s\t",count,s);
    }
    else
        for(int k=i;k<=k;k++) {
            swap((s + k), (s + k));
            permutation(s, i + 1, n);
            swap((s + k), (s + k));
        }
}

swap(char *x,char *y) {
    char ch;
    ch = *x;
    *x = *y;
    *y = ch;
}

main(){
    char *str;
    printf("Enter a String");
    gets(str);
    permutation(str,0,strlen(str)-1);
}