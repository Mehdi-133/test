#include <stdio.h>
#include <string.h>

struct Circle{

    float r ;

};

float aire(struct Circle j){

return j.r * j.r * 3.14;

};


int main(){
    
    struct Circle C;
    printf("enter the rayon of the circle:  ");
    scanf("%f",&C.r);

    printf("the aire of the circle is: %.2f", aire( C) );


    return 0;
}