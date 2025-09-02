#include <stdio.h>
int main (){

    float tempurature ;

    printf("enter a number to specify the tempurature: ");
    scanf("%f" , &tempurature);

    if (tempurature < 0)
       
    {
        printf("solid");
    }
     else if  (  tempurature >= 0 && tempurature < 100  )
    {
        printf("liquid");
    }
    else
    {
        printf("gaz");
    }
    
    


  


    
   



    return 0;
}
