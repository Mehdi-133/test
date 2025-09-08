#include <stdio.h>


int main()
{
int x;
int number;
int i;

printf("enter a number to muniuplate : ");
scanf("%d" , &number);

for ( i = 10; i >= 1  ; i--)
{
    x = number * i;
    printf("%d * %d = %d \n" ,number, i,  x);
}






    return 0;
}
