#include <stdio.h>


int main(){
    
    int factorial = 1 ;
    int i;
    int num;

    printf("enter a number: ");
    scanf("%d" , &num);

       
    for (int i = 1; i <= num; i++) {
            factorial *= i; 
        }
        printf("Factorial of %d = %d", num, factorial);
        
    
    
    
    return 0;
}