
#include <stdio.h>

long long fac(long long  num){
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else{
        return num * fac(num - 1);
    }
    
}
 
 int main(){

    long long  number;
    int i;
    

    printf("enter a number: ");
    scanf("%lld", &number);

    for ( i = 0; i < number; i++)
    {
       fac(number);
    }
    
    printf("the facteur of %lld is : %lld  ", number , fac(number));
    

    
 }