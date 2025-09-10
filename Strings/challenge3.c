#include <stdio.h>
#include <string.h>

int main(){

    char str1[50] ;
    char str2[50];

    printf("enter your name: ");
    fgets(str1 , sizeof(str1) , stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("enter a message : ");
    fgets(str2 , sizeof(str2) , stdin);
    str2[strcspn(str2, "\n")] = '\0';   

    
    
    strcat(str2 , str1);
    printf("%s ", str2);



    return 0;


}