// Q62: Reverse an array without taking extra space.

#include<stdio.h>
int main(){

    int i, n, arr[100], key, found = -1;
    printf("Enter the number of elements in array = ");
    scanf("%d",&n);
    
    printf("Enter %d integers = ",n);
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}