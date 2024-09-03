#include <stdio.h>
#include <string.h>
int main(){
    //variables
    int C;
    printf("la temperature en Celsius : ");
    scanf("%d",&C);
    if(C < 0)
        printf("l'etat de l'eau : Solide");
    else if(C >= 100 )
        printf("l'etat de l'eau : Gaz");
    else if(0 <= C < 100)
        printf("l'etat de l'eau : Liquide");

    return 0;
}
