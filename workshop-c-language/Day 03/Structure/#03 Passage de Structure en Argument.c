#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    int longueur;
    int largeur;
    int air_rectangle;
}rectangle;

int main(){
    rectangle Rec;
    printf("\nEnter The Largueur : ");
    scanf("%d",&Rec.largeur);
    printf("\nEnter The langueur : ");
    scanf("%d",&Rec.longueur);
    Rec.air_rectangle = Rec.largeur * Rec.longueur;
    printf("\nl'aire du rectangle : %d m^2",Rec.air_rectangle);

    return 0;
}
