#include <stdio.h>
#include <string.h>

int main(){


    char name[100];

     printf("enter your name: ");
     fgets(name , sizeof(name) , stdin);

     printf(" hello %s", name );
    
    return 0;

}