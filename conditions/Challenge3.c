#include <stdio.h>
#include <math.h>

int main (){

    int number1 ;
    int number2 ;
    int result ;

    printf("enter the first nummber: ");
    scanf("%d", &number1);
    printf("enter the second number: ");
    scanf("%d", &number2);

    if (number1 == number2)
    {
        result = (number1 + number2 ) * 3;
        printf(" the result is %d" , result);
    }
    else{
        result = number1 + number2 ;
        printf("the results is %d" , result);
    }

    return 0;
    

}