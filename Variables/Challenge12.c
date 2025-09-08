#include <stdio.h>
#include <math.h>

int main(){

    int inverse ;
    int num1 ;
   

    printf("enter four digits  numbers: ");
    scanf("%d", &num1 );

    inverse = (num1%10)*1000;
    inverse  += (num1/10%10)*100;
    inverse += (num1/100%10)*10;
    inverse += (num1/1000); 

    printf(" the inevert of this number is %d", inverse );






    return 0 ;
}