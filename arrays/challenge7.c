#include <stdio.h>
int main (){

    int size;
    int i;
    int numbers[size];
    int min;
    int j;

    printf("enter the size of the array: ");
    scanf("%d", &size);
    

    for ( i = 0; i < size ; i++){
         printf("enter the elements: ") ;
         scanf("%d", &numbers[i]);

    }
    for ( i = 0; i < size; i++){
        for ( j = 0; j < size-1-i; i++)
        {
            if(numbers[j]> numbers[j+1]){
                min = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = min;


            }
        }
    }
    for ( i = 0; i < size; i++)
    {
        printf("%d  ", numbers[i] );
    }
    
    return 0;
}