#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2 ;  
    float y1, y2 ;
    float z1, z2 ;
    float distance;

    printf("enter the coordinates of the first point: ");
    printf("x1: ");
    scanf("%f" , &x1);
    printf("y1: ");
    scanf("%f" , &y1);
    printf("z1: ");
    scanf("%f" , &z1);

    printf("enter the coordinates of the second point: ");
    printf("x2: ");
    scanf("%f" , &x2);
    printf("y2: ");
    scanf("%f" , &y2);
    printf("z2: ");
    scanf("%f" , &z2);

    

    distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) + (z2 - z1)*(z2 - z1) );

    printf("the distance between the two points is: %.2f", distance);


    

    return 0;
}