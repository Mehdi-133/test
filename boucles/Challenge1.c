#include <stdio.h>


int main()
{
int x;
int number;
int i;

printf("enter a number: ");
scanf("%d" , &number);

for ( i = 1; i <= 10 ; i++)
{
    x = number * i;
    printf("%d * %d = %d \n" ,number, i,  x);
}






    return 0;
}

