#include <stdio.h>
int main(){

float num1;
float num2;
float num3;
float Moyeene;

printf("enter the first number: ");
scanf("%f" , &num1);

printf("enter the second number: ");
scanf("%f" , &num2);

printf("enter the third number: ");
scanf("%f" , &num3);

Moyeene = (num1 * 2 + num2 * 3 + num3 * 5 ) / (2 + 3 + 5);

printf("%.2f" , Moyeene);

return 0 ;



}