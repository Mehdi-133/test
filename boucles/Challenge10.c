#include <stdio.h>
int main(){

    int number;
    int i;
    int sum = 0;
    int valeur;

    printf("enter a number: ");
    scanf("%d",&number);

    for ( i = 1; i <= number; i++)
    {

       valeur = sum + i;
       printf("%d +  %d  =  %d\n ", sum, i,valeur);
       sum=valeur;
    }

    printf("sum of the entire naturel: %d ", sum);

        

   
    

}