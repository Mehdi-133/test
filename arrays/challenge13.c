#include <stdio.h>
int main(){

    int i;
    int size;
    

    printf("enter the size of the elements: ");
    scanf("%d", &size);

    int numbers[size];
   
    for ( i = 0; i < size; i++)
    {
        printf("enter the elements: ");
        scanf("%d", &numbers[i]);
    }

    printf("the odd numbers are:\n");
    for ( i = 0; i < size; i++)
    {
       if( numbers[i] % 2 != 0){
        printf("%d\n", numbers[i]);
       }
    }

    return  0;
}