#include <stdio.h>
int main (){
    int inverse = 0 ;
    int numbers;
    int i = 0;
    int rest =  0;





    printf("enter a four digits numbers: ");
    scanf("%d", &numbers);

    while (numbers != 0)
    {
       rest = numbers % 10;
       inverse = inverse * 10 + rest;
       numbers = numbers / 10;
    }
    
    
    
    printf(" invert of your numbers: %d", inverse);

    return 0;

}