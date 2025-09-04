#include <stdio.h>
int main(){
   int base ;
   int exposant ;
   int result = 1;
   int i ;

   printf("enter le nombre de pase: ");
   scanf("%d", &base);

   printf("enter le nombre de exposant : ");
   scanf("%d", &exposant);

   for ( i = 1; i <= exposant; i++){
       result *= base;
       
   }
   printf(" %d", result );
   
   
    return 0;



   
}