#include <stdio.h>
#include <string.h>

struct Rectangle 
{
    float longueur; 
    float largeur;
};

float aire(struct Rectangle B){
    return B.longueur * B.largeur;
}




int main(){
    

    struct Rectangle P;
   

    printf("enter the longueur of rectangle : ");
    scanf("%f", &P.longueur );

    printf("enter the larguer  of rectangle: ");
    scanf("%f", &P.largeur);

    printf("the aire of rectangle is : %.2f", aire(P));


    return 0;
}