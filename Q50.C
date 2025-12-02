/* Q50: Write a program to print the following pattern:

*****
  ****
    ***
      **
        *

*/

#include <stdio.h>
int main() {
    int n = 5;   
    for (int i = 1; i <= n; i++) {
        for (int s = i; s < 3*(i-1)+1; s++) {
            printf(" ");
        }
        for (int j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n"); 
    }
    
    return 0;
}