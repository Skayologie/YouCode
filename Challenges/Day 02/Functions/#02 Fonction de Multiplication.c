#include <stdio.h>

/*
�crivez une fonction en C qui prend deux entiers en
param�tres et retourne leur produit.
Cr�ez un programme principal qui utilise cette fonction pour afficher
le produit de deux nombres.
*/
int multi(int a , int b){
    return a * b;
}

int main(){
    int a , b ;
    printf("Multiplication :\n\n");
    printf("Enter The 1st Number > ");
    scanf("%d",&a);
    printf("Enter The 2nd Number > ");
    scanf("%d",&b);
    printf("%d",multi(a,b));
}
