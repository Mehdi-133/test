#include <stdio.h>

int min(int a , int b){
   if( a > b){
    return b ;

   }
   else{
    return a;
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

    
    printf("the smaller number is %d", min(number1,number2));


    return 0;
}