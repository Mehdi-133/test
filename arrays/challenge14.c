#include <stdio.h>
int main(){

    int i;
    int size;
    float moyenne;
    float sum = 0;

    printf("enter the size of the elements: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("the array size must be greater that 0");
        return 1;
    }
    

    float numbers[size];
   
    for ( i = 0; i < size; i++)
    {
        printf("enter the elements: ");
        scanf("%f", &numbers[i]);
    }

    for ( i = 0; i < size; i++)
    {
       sum = sum +  numbers[i] ;
    }
    
    for ( i = 0; i < size; i++)
    {
       moyenne = sum / size;
    }
    printf("moyenne of the array is: %.2f", moyenne );
    
    return 0;

}