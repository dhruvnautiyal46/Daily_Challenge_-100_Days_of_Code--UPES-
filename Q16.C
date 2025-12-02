// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main(){

    int A,B,C;
    printf("Enter no. A= ");
    scanf("%d",&A);
    printf("Enter no. B= ");
    scanf("%d",&B);
    printf("Enter no. C= ");
    scanf("%d",&C);
    
    if(A>B && A>C){
        printf("A=%d is the greatest no.",A);
    }else if(B>A && B>C){
        printf("B=%d is the greatest no.",B);
    }else{
        printf("C=%d is the greatest no.",C);
    }
    
    return 0;
}