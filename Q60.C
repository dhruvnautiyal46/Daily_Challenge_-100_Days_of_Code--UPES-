// Q60: Count positive, negative, and zero elements in an array.

#include<stdio.h>
int main(){

    int i, n, pos = 0, neg = 0, zero = 0;
    printf("Enter the number of elements in array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of your array = ",n);
    
    for( i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
        
        if(arr[i] > 0){
            pos++;
        } else if(arr[i] < 0){
            neg++;
        } else{
            zero++;
        }
    }

    printf("Count of positive numbers is %d.\n",pos);
    printf("Count of negative numbers is %d.\n",neg);
    printf("Count of zeroes is %d.\n",zero);

    return 0;
}