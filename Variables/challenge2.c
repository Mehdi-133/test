#include <stdio.h>
int main (){
    
    
    float k;
    float c;
    float a;
    printf("enter a number to convert from  degres celsuis to kelvin: ");
    scanf( "%f",&c);
    a = 273.15;
    k = a + c;

    printf( "temperature kelvin is  %.2f",k);




    return 0;
}