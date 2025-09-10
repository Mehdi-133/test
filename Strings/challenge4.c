#include <stdio.h>
#include <string.h>

int main(){

    char str1[50] ;
    char str2[50];

    printf("enter the first string : ");
    fgets(str1 , sizeof(str1) , stdin);
  
    printf("enter the second string : ");
    fgets(str2 , sizeof(str2) , stdin);
  

   if (strcmp(str1, str2) == 0){
    printf("the strings are similar");
    
   }
   else{
    printf("the strings are not  similar");
   }
    
    return 0;
}