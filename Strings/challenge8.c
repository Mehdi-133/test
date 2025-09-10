#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

    char name[50];
    int i;
    

    printf("enter your name (upper case) :");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';   

   for ( i = 0; i < 50 ; i++)
   {
      name[i] = towlower(name[i]);
   }
   printf("the toupper case is %s", name);
   



    return 0;
}