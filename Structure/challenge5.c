#include <stdio.h>
#include <string.h>

struct  Livre

{
    char titre[50];
    char auteur[50];
    int annee;

};

struct Livre kind(){
    struct Livre p;

   strcpy(p.titre , "hard work");
   strcpy(p.auteur, "new cal port");
   p.annee = 2019;

   return p;
       
 

}
int main(){


   struct Livre M = kind();

   printf("titre : %s\n ", M.titre);
   printf("auteur : %s\n ", M.auteur);  
   printf("anne : %d\n ", M.annee);
 

        
       
        return 0;
}