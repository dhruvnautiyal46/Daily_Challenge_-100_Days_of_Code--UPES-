//Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
int main(){

    int n,prod=1;
    printf("Enter the no.=");
    scanf("%d",&n);

    for(int i=2; i<=n; i=i+2){
        prod=prod*i;
    }

    printf("Product of %d even nos. are= %d",n,prod);

    return 0;
}