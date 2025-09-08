#include <stdio.h>


int main(){
    int size;
    int number[size] ;
    int i;
    int max;
    
     
    printf("enter the size of array: ");
    scanf("%d", &size);
    
     
     for ( i = 0; i < size; i++)

     {
        printf("enter the elements : ");
        scanf("%d", &number[i]);
       
     }
     
    max = number[0];
    for ( i = 1; i < number[i]; i++)
    {
        if (max < number[i])
        {
           max = number[i];
        }
        
    }
    printf("the bigger number in the array is %d", max);
        
return 0;
}