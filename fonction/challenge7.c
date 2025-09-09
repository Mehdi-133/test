#include <stdio.h>
#include <string.h>

void inverter_chain(char array[]){

    
    int debut = 0;
    int fin = strlen(array) -1 ;
    char copie ;

    while (debut < fin)
    {
       copie = array[debut];
       array[debut] = array[fin];
       array[fin] = copie; 
       
       debut++;
       fin--;

    }
    
    
}
int main(){

    char name [100];

    printf("enter a name to invert it: ");
    scanf(" %s", name);

    inverter_chain(name);

    printf("the word become a % s\n", name);





    return 0;
}