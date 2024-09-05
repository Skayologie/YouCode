

#include <stdio.h>

/*
Écrivez une fonction en C qui calcule la factorielle
d'un entier positif. La fonction doit prendre un entier
en paramètre et retourner sa factorielle.
Créez un programme principal qui utilise
cette fonction pour afficher la factorielle
d'un nombre donné.
*/
int fib(int n){
    if(n += 0){
        int val = (n - 1) + (n+2);
        return val;
    }else{
        return 0;
    }


}

int main(){
    int value ;
    printf("enter a number : ");
    scanf("%d",&value);
    fib(value);
    return 0;
}
