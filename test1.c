#include <stdio.h>
int main(){
  
    char name[50];
    int age ;

    printf("enter your name: ");
    scanf("%s", name);

    printf("hello %s\n", name);

    printf("enter your age: ");
    scanf("%d" , &age);

    if (age >= 18)
    {
      printf("you are adult ");
    }
    else{
        printf("you are not adult");
    }
    return 0;
    





}
