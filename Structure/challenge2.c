#include <stdio.h>
#include <string.h>


struct Students
{
    char first_name[50];
    char last_name[50];
    int notes [5];
};


int main(){
     
    struct Students S;
    int i;

    printf("enter your first name: ");
    fgets(S.first_name, 50 , stdin);
    S.first_name[strcspn(S.first_name, "\n")] = '\0';   


    printf("enter your last name : ");
    fgets(S.last_name, 50 , stdin);
    S.last_name[strcspn(S.last_name, "\n")] = '\0';   

   

    for ( i = 0; i < 5; i++)
    {
         printf("enter your notes: ");
         scanf("%d", &S.notes[i]);
    }

    printf("first name: %s\n ", S.first_name);
    printf("last name: %s\n ", S.last_name);


   

    printf("your notes are:\n ");
    for ( i = 0; i < 5; i++)
    {
      printf("%d\n", S.notes[i]);
       
    }
    

    return 0;
}