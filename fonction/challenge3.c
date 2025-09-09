#include <stdio.h>

int max(int a , int b){
   if( a > b){
    return a ;

   }
   else{
    return b;
   }
}


int main(){

    int number1;
    int number2;
    int result;

    printf("enter the first number: ");
    scanf("%d", &number1);

    printf("enter the second number: ");
    scanf("%d", &number2);

    
    printf("the greatest number is %d", max(number1,number2));


    return 0;
}