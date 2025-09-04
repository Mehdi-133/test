#include <stdio.h>

int main() {
    int number;
    int i;

    printf("Enter a number : ");
    scanf("%d", &number);

    for ( i = 1; i <= number; i++)
    {
        if (i % 2 == !0)
        {
            printf("%d ", i);
        }
        
    }
    
    

    return 0;
}