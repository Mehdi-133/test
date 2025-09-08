#include <stdio.h>


int main(){

    int size;
    int number[size] ;
    int i;
    int sum= 0;
    
     
    printf("enter the size of array: ");
    scanf("%d", &size);
    
     
     for ( i = 0; i < size; i++)

     {
        printf("enter the element : ");
        scanf("%d", &number[i]);
       
     }
     
    printf("the array is:\n ");
    for ( i = 0; i < size; i++)
    {   
        printf(" %d\n", number[i]);
    }

    for ( i = 0; i < size; i++)
    {
        sum += number[i];
    }
    printf(" sum is : %d", sum);
    
    
return 0;
}