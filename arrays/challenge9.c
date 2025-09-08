#include <stdio.h>
int main(){


    int i;
    int size;
    

    printf("enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];
    int invert[size];



    for ( i = 0; i < size; i++)
    {
        printf("enter the elements: ");
        scanf("%d", &numbers[i]);
    }


    for ( i = 0; i < size ; i++)
    {
        invert[i] = numbers[size - 1 - i];
    }

    
    printf("the invert array: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d", invert[i]);
    }
   
    return 0;


}