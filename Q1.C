// Q1: Write a program to input two numbers and display their sum.

#include<stdio.h>
int main(){
    
    int x,y,S;
    printf("Enter the no. x= ");
    scanf("%d",&x);
    printf("Enter the no. y= ");
    scanf("%d",&y);
   
    S=x+y;
   
    printf("Sum of %d and %d is %d",x,y,S);
   
    return 0;
}