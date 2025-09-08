#include <stdio.h>
int main(){

    int i;
    int size ;
    int fac ;
    int number[size];

    printf("enter the size of the array:");
    scanf("%d", &size);

    for ( i = 0; i < size; i++)
    {
    printf("enter the elements: ");
    scanf("%d", &number[i]);
    }

    printf("enter a number to muniuplate: ");
    scanf("%d", &fac);

    for ( i = 0; i < size; i++){
        number[i] *= fac;
        printf("%d\n", number[i]);
    }

    return 0;
}
