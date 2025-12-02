// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main(){

    char ch;
    printf("Enter the character= ");
    scanf("%c",&ch);

    if(ch=='a'){
        printf("It is a vowel.");
    }else if(ch=='e'){
        printf("It is a vowel.");
    }else if(ch=='i'){
        printf("It is a vowel.");
    }else if(ch=='o'){
        printf("It is a vowel.");
    }else if(ch=='u'){
        printf("It is a vowel.");
    }else{
        printf("It is a consonant.");
    }

    return 0;
}