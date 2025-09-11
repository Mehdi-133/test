#include <stdio.h>
#include <strings.h>

struct Persons
{
    char first_name[50];
    char last_name[50];
    int age;
};


int main(){
     

   struct Persons p;

   strcpy(p.first_name , "mehdi");
   strcpy(p.last_name , "karbitou");
   p.age = 21;
       
   printf("first name: %s\n ", p.first_name);
   printf("last name : %s\n ", p.last_name);  
   printf("age : %d\n ", p.age);

    return 0;
}

