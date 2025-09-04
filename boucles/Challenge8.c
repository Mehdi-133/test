#include <stdio.h>
int main (){

    int i ;
    int number ;
    int x1 = 0 ;
    int x2 = 1;
    int x3;

    printf("enter a number:  ");
    scanf(" %d", &number);
    printf("suit of fibonacci : ", number);

    for ( i = 0; i <= number-1 ; i++)
    {
       printf("%d", x1);
       x3 = x1 + x2;
       x1= x2;
       x2 = x3;

    }
    
    

    return 0;
    
}
