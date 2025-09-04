#include <stdio.h>


int main(){

    int number ;
    int sum = 0;
    int i;

    printf("enter a number: ");
    scanf("%d", &number);

    for ( i = 1; i <= number ; i++)
    {
       sum += i; 
    }
    
    printf("the sum is: %d",sum);
    

return 0;
}