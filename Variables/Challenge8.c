#include <stdio.h>
#include <math.h>
int main(){
float num1;
float num2;
float num3;
float Moyenne;


printf("enter the first number: ");
scanf("%f" , &num1);

printf("enter the second number: ");
scanf("%f" , &num2);

printf("enter the third number: ");
scanf("%f" , &num3);

Moyenne  = cbrt(num1 * num2 * num3);

printf("%.2f" , Moyenne);

return 0;
}