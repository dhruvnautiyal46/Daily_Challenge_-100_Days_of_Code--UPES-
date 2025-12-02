// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){
    
    float r,Area,Circumference;
    printf("Enter the radius of circle (in cm)= ");
    scanf("%f",&r);    
    
    Area=3.14*r*r;
    Circumference=2*3.14*r;
    
    printf("Area of circle is %f cm^2 \n",Area);
    printf("Perimeter of circle is %f cm ",Circumference);
    
    return 0;
}