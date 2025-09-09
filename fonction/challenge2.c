#include <stdio.h>

int product(int a , int b){
return a * b;
}

int main(){

    int number1;
    int number2;
    int result;

    printf("enter the first number: ");
    scanf("%d", &number1);

    printf("enter the second number: ");
    scanf("%d", &number2);

     result = product(number1, number2);
     printf("the product of %d and  %d is : %d\n ", number1, number2, result);

    return 0;
}