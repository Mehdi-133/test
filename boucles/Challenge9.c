#include  <stdio.h>
int main(){

    int count = 0;
    long long  numbers;
    

    printf("enter an entire number:  ");
    scanf("%lld", &numbers);

    if (numbers == 0)
    {
        count = 1;
        
    }
    else{
        if (numbers < 0)
        {
            numbers = -numbers;
            
        }
        while (numbers> 0)
        {
            numbers = numbers/ 10;
            count++;
        }
       
        
        
    }
  

   
    printf("the digits are : %d", count);
    
    
return 0;

}