#include <stdio.h>
int main (){
    int numbers;
   

    printf("enter a four digits numbers: ");
    scanf("%d", &numbers);

    for (; numbers != 0 ; numbers /= 10)
    {
        printf("%d", numbers%10);
    }
    
    return 0;
}