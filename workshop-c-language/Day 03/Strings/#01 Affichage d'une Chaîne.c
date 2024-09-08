#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int Rep;
    printf("Repetition : ");
    scanf("%d",&Rep);
    char Chaine[Rep][50] ;
    printf("\n----------Insertion----------\n");
    for (int i = 0; i < Rep; i++)
    {
        printf("Enter Name %d : ",i+1);
        scanf("%s",&Chaine[i]);
    }
    printf("\n----------Affichage----------\n");
    for (int i = 0; i < Rep; i++)
    {
        printf("This is Name : %s\n",Chaine[i]);
    }
       
    
    return 0;
}
