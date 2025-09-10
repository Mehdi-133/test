#include <stdio.h>
#include <string.h>

int main(){

     char str1[300]  ;
     char check[50] ;
     int i;

     printf("enter a sentence: ");
     fgets(str1, sizeof(str1), stdin);
     str1[strcspn(str1, "\n")] = '\0'; 

     printf("enter something  to check if its already in the string:  ");
     scanf("%s", &check);

        if (strstr(str1 , check))
        {
            printf("the \"%s\" its found in the string \n ", check);
        }
        else{
            printf("the \"%s\" doesn't found in the string" , check);
        }
        

        
        
     
     
     

    return 0;
}
