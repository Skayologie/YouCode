

#include <stdio.h>

/*
�crivez une fonction en C qui calcule le n-i�me
terme de la suite de Fibonacci.
La fonction doit prendre un entier en
param�tre et retourner le n-i�me terme.
Cr�ez un programme principal qui utilise
cette fonction pour afficher le terme de Fibonacci demand�.
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
