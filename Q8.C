// Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){

    int n,S;
    printf("Enter the no.= ");
    scanf("%d",&n);

    S= n*(n+1)/2;

    printf("Sum of natural numbers till %d is %d",n,S);

    return 0;
}