#include <stdio.h>

/*
Écrivez une fonction en C qui prend deux entiers en paramètres
et retourne le plus grand des deux. Créez un programme principal
qui utilise cette fonction pour afficher le maximum entre deux nombres.
*/
int max(int a , int b){
    if(a>b)
        return a;
    else if(b>a)
        return b;
}

int main(){
    int a , b ;
    printf("Enter The 1st Number : ");
    scanf("%d",&a);
    printf("Enter The 2nd Number : ");
    scanf("%d",&b);
    printf("The Maximum Number Is >>>> %d",max(a,b));
    return 0;
}
