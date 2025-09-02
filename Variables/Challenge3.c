#include <stdio.h>
int main (){
    
    
    float steps;
    float km; 
    
    printf("enter a distance to convert from mile to steps: ");
    scanf( "%f",&km);

    steps = km * 1093.61;
     printf( " distance with stepes :   %.2f", steps )



    return 0;
}