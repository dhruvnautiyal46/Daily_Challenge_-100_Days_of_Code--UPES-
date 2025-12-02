// Q61: Search for an element in an array using linear search.

#include<stdio.h>
int main(){

    int i, n, arr[100], key, found = -1;
    printf("Enter the number of elements in array = ");
    scanf("%d",&n);
    
    printf("Enter %d integers = ",n);
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter element to be search = ");
    scanf("%d",&key);

    for(i = 0; i < n; i++){
        if(key == arr[i]){
            found = i;
            break;
        }
    }

    if(found != -1){
        printf("Found at index %d \n", found);
    }else{
        printf("-1 \n");
    }
        
    return 0;
}