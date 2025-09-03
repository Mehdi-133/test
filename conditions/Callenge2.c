#include <stdio.h>
int main()
{
    char char1;
    
    printf("enter a charackter: ");
    scanf(" %c" , &char1);

    switch (char1) {
       case 'a' :
       case 'A' :
       case 'e' :
       case 'E' :
       case 'i' :
       case 'I' :
       case 'o' :
       case 'O' :
       case 'u' :
       case 'U' :
             printf("the charackter %c its a  vowel" , char1);

             break;

    default:
              printf("the charackter %c not a vowel" , char1);
              break;

           

        
    }
   
    return 0;
}
