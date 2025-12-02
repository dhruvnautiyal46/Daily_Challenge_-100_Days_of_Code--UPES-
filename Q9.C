// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main(){

    float P,R,T,SI,CI;
    printf("Enter the value of P= ");
    scanf("%f",&P);
    printf("Enter the value of R= ");
    scanf("%f",&R);
    printf("Enter the value of T= ");
    scanf("%f",&T);

    SI=(P*R*T)/100;
    CI=P*pow(1+R/100,T)-P;

    printf("Simple Interest is %f \n",SI);
    printf("Compund Interest is %f \n",CI);

    return 0;
}