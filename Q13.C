// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){

    int Y;
    printf("Enter the year= ");
    scanf("%d",&Y);

    if (Y % 400 == 0) {
        printf("Leap year");
    } else if (Y % 100 == 0) {
        printf("Not a leap year\n");
    } else if (Y % 4 == 0) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
    
    return 0;
}