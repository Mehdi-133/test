#include <stdio.h>
#include <string.h>

struct  Product 
{
  char name[50];
  int quantity ;
  float price;
};



int main(){

   struct Product  all[3];
   int i;

   for ( i = 0; i < 3 ; i++)
   {
    printf("enter a product: ");
    fgets(all[i].name, 50, stdin );
    all[i].name[strcspn(all[i].name, "\n")] = '\0';   

    printf("enter the price: ");
    scanf(" %f", &all[i].price);
    getchar();

    printf("enter the quantity: ");
    scanf(" %d", &all[i].quantity);
    getchar();

   }
    
   printf("the information about product:\n ");
   for ( i = 0; i < 3; i++)
   {
    printf("product:  %s\n", all[i].name);
    printf("price :%.2f dh\n",  all[i].price);
    printf(" quantity: %d\n",  all[i].quantity);
   }

    return 0;
}