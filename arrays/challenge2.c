#include <stdio.h>


int main(){
    int size;
    int number[size] ;
    int i;
    
     
    printf("enter the size of array: ");
    scanf("%d", &size);
    
     
     for ( i = 0; i < size; i++)

     {
        printf("enter the elements : ");
        scanf("%d", &number[i]);
       
     }
     
    printf("the array is:\n ");
    for ( i = 0; i < size; i++)
    {   
        printf(" %d\n", number[i]);
    }

return 0;
}