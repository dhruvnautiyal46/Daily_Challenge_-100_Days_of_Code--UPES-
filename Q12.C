// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){

    int N;
    printf("Enter a no.= ");
    scanf("%d",&N);

    if(N<0){
        printf("NEGATIVE");
    }else if(N==0){
        printf("ZERO");
    }else if(N>0){
        printf("POSITIVE");
    }

    return 0;
}