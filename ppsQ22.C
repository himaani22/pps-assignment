#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Even numbers between 1 to 100\n");  
 
    counter = 2;
    while (counter <= 100) {  
        printf("%d ", counter);
        /* Add 2 to current even number 
           to get next even number */
        counter = counter + 2;  
    }  
   
    return 0;  
} 