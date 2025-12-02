// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient. 

#include<stdio.h>
int main(){
   
    int x,y,Sum,Sub,Prod,Quot;
    printf("Enter the no. x= ");
    scanf("%d",&x);
    printf("Enter the no. y= ");
    scanf("%d",&y);
  
    Sum=x+y;
    Sub=x-y;
    Prod=x*y;
    Quot=x/y;

    printf("Sum of x and y is %d \n",Sum);
    printf("Product of x and y is %d\n",Prod);
    printf("Substraction of x and y is %d \n",Sub);
    printf("Quotient of x and y is %d ",Quot);    
   
    return 0;
}