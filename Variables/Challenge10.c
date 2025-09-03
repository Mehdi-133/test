#include <stdio.h>
#include <math.h>
int main()
{
    float volume ;
    float r ;
    float pi = 3.14;

    printf("enter the radius of the sphere: ");
    scanf("%f" , &r);

    volume = (4/3) * pi * r * r * r;

    printf("the volume of the sphere is: %.2f", volume);

    return 0;
}