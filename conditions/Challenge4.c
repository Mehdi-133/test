#include <stdio.h>
#include <math.h>

int main(){

    float a ;
    float b ;
    float c ;
    float  delta, x , solution1, solution2;

    printf("enter points a, b, c : ");
    scanf("%f", &a , &b , &c );

    if (a == 0)
    {
        printf("the eauqtion not a second type");
    }
    else  {
        delta = pow(b, 2) - 4 * a * c ;
        if (delta < 0)
        {
            printf("there is no solution");
        }
        if else(delta == 0){
            printf("there is one solution: ")

            

        
        }
        
        
        
          
    
    



    


    return 0;
}