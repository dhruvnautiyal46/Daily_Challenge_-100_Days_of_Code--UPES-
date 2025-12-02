//Q57: Find the sum of array elements.

#include<stdio.h>
int main(){   
    
    int n, sum = 0;
    printf("The number of elements in your array is = ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the %d elements in your array = ",n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    printf("The sum of array elements are = %d", sum);


    return 0;
}