// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){

    int hours, minutes, seconds, sec;
    printf("Enter the time in seconds= ");
    scanf("%d",&sec);

    hours=sec/3600;
    seconds=sec%3600;
    minutes=seconds/60;
    seconds=seconds%60;

    printf("Time is %d : %d : %d",hours,minutes,seconds);
     
    return 0;
}