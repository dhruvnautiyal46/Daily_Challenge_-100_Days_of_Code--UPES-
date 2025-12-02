// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main(){

    int N;
    printf("Enter the no. N= ");
    scanf("%d",&N);

    if(N%2==0){
        printf("N is an even no.");
    }else{
        printf("N is an odd no.");
    }

    return 0;
}