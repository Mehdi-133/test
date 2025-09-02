#include <stdio.h>
int main (){
    
    
    float km_h ;
    float m_s; 
    
    printf("enter a number to convvert from km/s to m/s: ");
    scanf( "%f",&km_h);

    m_s = km_h * 0.27778;
    printf("%.2f", m_s );




    return 0;
}