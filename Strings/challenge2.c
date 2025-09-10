#include <stdio.h>
#include <string.h>

int main(){

    int size;
    char name [] = "mehdi" ;
    

    size = sizeof(name) / sizeof(name[0]);
    printf("the size of the array is: %d", size);


return 0;
}