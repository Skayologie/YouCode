

#include <stdio.h>

/*
Écrivez une fonction en C qui calcule le n-ième
terme de la suite de Fibonacci.
La fonction doit prendre un entier en
paramètre et retourner le n-ième terme.
Créez un programme principal qui utilise
cette fonction pour afficher le terme de Fibonacci demandé.
*/
int fac(int a){
    int t[a];
    int nm = 1;
    for(int i = a ; i>0 ; i--){
        t[i] = i;
        nm *= i;
    }
    return nm;

}

int main(){
    int a ;
    printf("Factorials Calculator\n\n");
    printf("Enter The Number : ");
    scanf("%d",&a);
    printf("The answer is >>>> %d\n\n",fac(a));
    return 0;
}
