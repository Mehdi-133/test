#include <stdio.h>
int main(){


int number;
int i;
int sum;
int next ;

printf("enter a number: ");
scanf("%d", &number);
for ( i = 1; i <= number; i++)
{
    sum = i * (i  + 1)/2;
    next = sum - i ;
   printf("%d + %d = %d\n", next , i, sum);
}
 printf(" sum of the number : %d", sum);



    return 0;
}