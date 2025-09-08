#include <stdio.h>
int main(){

    int i;
    int size;
    int check;
    int resultCheck = 0;


    printf("enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];

    for(i = 0; i < size ; i++){
        printf("enter the elements: ");
        scanf("%d", &numbers[i]);   
    }

    printf("enter the element for check if its in the array or not: ");
    scanf("%d", &check);

    
    for ( i = 0; i < size; i++)
    {
        if (numbers[i] == check)
        {
            printf("the elemnet %d is in the array in the index %d ", check , i);
            resultCheck = 1;
            break;
        }  
       
    }

    if (!resultCheck)
    {
         printf("the element %d its not in the array", check);
    }
    
    return 0;
}