// Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main(){

    int a,b;
    printf("enter a= ");
    scanf("%d",&a);
    printf("enter b= ");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping a is %d \n",a);
    printf("After swapping b is %d",b);    

    return 0;
}