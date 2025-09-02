#include <stdio.h>
int main (){
  

float num1 ;
float num2 ;
char operator;


printf("enter the first number: ");
scanf("%f" , &num1);

printf("enter the operqtor (- + * / ): ");
scanf(" %c" , &operator);

printf("enter the second number: ");
scanf("%f" , &num2);

if (operator == '+') 

{
printf("result : %.2f " ,   num1 + num2);
}

else if (operator == '-')
{
   printf("result : %.2f" , num1 - num2);
}

else if (operator == '*')
{
   printf("result : %.2f" , num1 * num2);
}

else if (operator == '/')
{
   printf("result : %.2f" , num1 / num2);
}
else{
    printf("invalid");
}





return 0;
     

}
    
