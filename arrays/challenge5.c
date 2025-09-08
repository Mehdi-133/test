#include <stdio.h>
int main(){

    int i;  
    int size;
    int number[size];
    int min;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    for ( i = 0; i < size; i++)
    {
        printf("enter the element: ");
        scanf("%d", &number[i]);
    }
    min = number[0];
    for ( i = 1; i < number[i]; i++)
    {
        if (min > number[i])
        {
           min = number[i];
        }
        
    }
    printf("the smaller  number in the array is %d", min);
        

    return 0;
}