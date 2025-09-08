#include <stdio.h>
int main(){

    int i,j=0;
    int size1,size2,size = 0;

    printf("enter the size of the array 1: ");
    scanf("%d", &size1);

    printf("enter the size of the array 2: ");
    scanf("%d", &size2);

    size = size1 + size2;

    int numbers1[size1];
    int numbers2[size2];
    int new[size];
    
    
    
   

    for ( i = 0; i < size1; i++)
    {
        printf("enter the elements of the array 1 : ");
        scanf("%d", &numbers1[i]); 
    }

    for ( i = 0; i < size2; i++)
    {
        printf("enter the elements of the array 2: ");
        scanf("%d", &numbers2[i]);
    }

     i = 0;
    while ( i < size1)
    {
    new[i] = numbers1[i] ;
     i++;
    }

    while ( j < size2)
    {
    new[i] = numbers2[j] ;
     i++;
     j++;
    }
    
    printf("the new array is:\n ");
 i = 0;
    while ( i < size)
    {
     printf("%d ", new[i]);
        i++;
    }
   

    return 0;
}