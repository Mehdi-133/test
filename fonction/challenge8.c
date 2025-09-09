#include <stdio.h>

int if_pair( int num){
    if (num % 2 == 0){
        return 1;
    }
    else{
        return 0 ;
    }
}
int main(){

    int number ;
    printf("enter a number to check if its pair or not: ");
    scanf("%d", &number);

   if_pair(number) ? printf("the number %d is pair" , number) : printf("the number %d is odd", number);
    
   return  0;
    

}