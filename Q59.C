// Q59: Count even and odd numbers in an array.

#include<stdio.h>
int main(){

    int i, n, even = 0, odd = 0;
    printf("Enter the number of elements in array = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements of your array (not 0) = ",n);
    
    for( i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
        if( arr[i] % 2 == 0){
            even++;
        } else{
            odd++;
        }
    }

    printf("Count of even numbers is %d.\n",even);
    printf("Count of odd numbers is %d.\n",odd);

    return 0;
}