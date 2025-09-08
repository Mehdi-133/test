#include <stdio.h>
int main(){

    int i;
    int size;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];
    int new[size];


    for ( i = 0; i < size; i++)
    {
        printf("enter the element: " );
        scanf("%d", &numbers[i] );
    }
  
    
    for (i = 0; i < size; i++) {
        new[i] = numbers[i];
    }

    printf("the new Array elements:\n ");
    for (i = 0; i < size; i++) {
        printf("%d\n ", new[i]);
    }

    return 0;
}