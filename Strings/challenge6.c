#include <stdio.h>
#include <string.h>

int main(){
    
    char character ;
    char word[50];
    int i;
    int found = 0;

    printf("enter a word: ");
    fgets(word , sizeof(word), stdin);

    printf("enter a character: ");
    scanf(" %c" , &character);

    for ( i = 0; i < 5 ; i++)
    {
       if (  word[i]== character )
       {
         found++;
       }

       
      }
      printf("the character founded %d times", found);


    return 0;
}