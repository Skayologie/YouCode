#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nom[50] ; 
    char prenom[50];
    int notes;
}students;

int main(){
    students S[20];
    int eleveNombre ;
    int i = 0;
    printf("\n#Student Number %d\n",i+1);
    printf("\nPlease Enter %d Student name      :",i+1);
    fflush(stdin);
    gets(S[i].nom);
    printf("Please Enter %d Student Last Name :",i+1);
    gets(S[i].prenom);
    printf("Please Enter %d Student note      :",i+1);
    scanf("%d",&S[i].notes);

    printf("_____________________________");
    printf("\nThe Name Of Student %d    :",i+1);
    puts(S[i].nom);
    printf("The Last Name Of Student %d   :",i+1);
    puts(S[i].prenom);
    printf("The Note Of Student %d        :%d",i+1,S[i].notes);


return 0;
}
