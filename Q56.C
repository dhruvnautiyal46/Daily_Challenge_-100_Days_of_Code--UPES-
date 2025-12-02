/* Q56: Read and print elements of a one-dimensional array.

Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

*/

#include<stdio.h>
int main(){

    int n;

    printf("The number of elements in your array is = ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the %d elements in your array = ",n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("The array elements are = ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}