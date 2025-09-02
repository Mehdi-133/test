#include <stdio.h>
int main(){

    char first_name[50] ;
    char last_name [50];
    int age;
    char sexe[50];
    char email[50];

    printf("enter your first name:  ");
    scanf("%s" , first_name);

    printf("enter your last name:  ");
    scanf("%s" , last_name);

    printf("enter your age :  ");
    scanf("%d" , &age);

    printf("enter your sexe :  ");
    scanf("%s" , sexe);

    printf("enter your email:  ");
    scanf("%s" , email);
    

    printf(" your first name is : %s\n" , first_name);
    printf(" you last name is : %s\n" , last_name);
    printf("your age is %d\n" , age);
     printf("you are a : %s\n" , sexe);
    printf(" your email is %s\n" , email);

    

    

    


    return 0;
}
