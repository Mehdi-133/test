#include <stdio.h>
#include <string.h>

typedef struct {
     char name [50];
     float sold;

}Acount ;

 Acount  modify(Acount A, float amount )
{

    A.sold += amount;
    return A;
};


int main(){

    Acount  B;
    float money;

    printf("enter your name: ");
    fgets(B.name , 50 , stdin );
    B.name[strcspn(B.name , "\n") ] = '\0';

    printf("enter you actual amount: ");
    scanf("%f", &B.sold);

     printf("how much you want to add:  ");
    scanf("%f", &money);

    B =modify(B, money);


    printf("%s\n",B.name );
    printf("%.2f", B.sold);

    return 0;
}