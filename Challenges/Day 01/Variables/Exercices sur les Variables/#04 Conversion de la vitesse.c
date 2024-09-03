#include <stdio.h>
#include <string.h>
int main(){
    //variables
    float kmh , ms;


    printf("Enter The vitesse en kilomètres / h :");
    scanf("%f",&kmh);

    ms = kmh * 0.27778;

    printf("The metres par seconde : %.2f",ms);

    return 0;
}

