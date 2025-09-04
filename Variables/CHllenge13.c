#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    char binary[33];

    printf("enter a number to khow the values as a binary: ");
    scanf("%d" , &num);

    printf("the nombre format hexadecimal: %X\n", num);

     itoa(num, binary, 2);
    printf("the number in banary is %s ", binary);

    return 0;


    
}

