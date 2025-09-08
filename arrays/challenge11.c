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
    
    int replace ;
    int new;

    printf("enter the value you want to replace: ");
    scanf("%d", &replace);

    printf("enter the new value: ");
    scanf("%d", &new);
    

    for ( i = 0; i < size; i++)
    {
        if (numbers[i] == replace)
        {
           numbers[i] = new;
        }
        
    }
    
    printf("the new array is:\n");
    for ( i = 0; i <size; i++){

       printf(" %d\n", numbers[i]);
    }
    
    return 0;
}