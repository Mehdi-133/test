#include <stdio.h>
#include <string.h>

int main(){

    char str1[50] ;
    char str2[50] ;
    int i,j=0;

    printf("enter a sentence: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    for ( i = 0; i < 50; i++)

    {
      
      if (str1[i] != ' ')
      {
        str2[j] = str1[i];
        j++;
      }
      

    }
    printf("your sentence without spaces is: %s" , str2);
    
    return 0;
}