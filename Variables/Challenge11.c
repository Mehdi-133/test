#include <stdio.h>
#include <math.h>
int main()
{
   
    float surface;
    float length;
    float width;

    printf("enter the length of the rectangle:  ");
    scanf("%f" , &length);

    printf("enter the  width of the rectangle:  ");
    scanf("%f" , &width);

    surface = length * width;

    printf("the surface of the rectangle is: %.2f", surface);
    return 0;

    }