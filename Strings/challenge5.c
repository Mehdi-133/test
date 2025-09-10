#include <stdio.h>
#include <string.h>

int main(){

char str1[50] ;
   

printf("enter a name to invert: ");
fgets(str1 , sizeof(str1), stdin);
str1[strcspn(str1, "\n")] = '\0';

int debut = 0;
int fin = strlen(str1) -1;
int new;

while (debut < fin)
{
    new = str1[debut];
    str1[debut] = str1[fin];
    str1[fin] = new;

    debut++;
    fin--;
}

printf("the invert version of your name is %s", str1);

    
    return 0;
}