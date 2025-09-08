#include <stdio.h>
#include <math.h>
int main(){

    int number ;
    int i;
    int j;
    int isPrime;

    printf("enter a number: ");
    scanf("%d", &number);

      printf("Prime numbers from 1 to %d are:\n", number);

    for (i = 2; i <= number; i++) {
        isPrime = 1;

        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

    
    


 