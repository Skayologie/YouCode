#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nom[50];
    char prenom[50];
    int age;
}personne;


int main(){
    personne personne[20];
    strcpy(personne[0].nom,"Jawad");
    strcpy(personne[0].prenom,"Boulmal");
    personne[0].age = 21;

    printf("Hello %s %s , Your age is %d .",personne[0].nom,personne[0].prenom,personne[0].age);
}
