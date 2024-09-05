#include <stdio.h>

//Écrivez une fonction en C qui prend deux entiers en paramètres
//et retourne leur somme.
//Créez un programme principal qui utilise cette fonction
// pour afficher la somme de deux nombres.
int sum(int a , int b){
    return a + b;
}

int main(){
    int a , b ;
    printf("Multiplication :\n\n");
    printf("Enter The 1st Number > ");
    scanf("%d",&a);
    printf("Enter The 2nd Number > ");
    scanf("%d",&b);
    printf("%d",sum(a,b));
}
