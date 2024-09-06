#include <stdio.h>
#include <string.h>
#define maxLentgh 100
int choix ;
int counter = 0;


typedef struct{
    char name[50];
    char auteur[50];
    float price;
    int quantity;
}livres;



int commands(){
system("cls");
printf("1 > Ajouter un livre au stock .\n");
printf("2 > Afficher tous les livres disponibles .\n");
printf("3 > Rechercher un livre par son titre .\n");
printf("4 > Mettre a jour la quantite d'un livre .\n");
printf("5 > Supprimer un livre du stock.\n");
printf("6 > Afficher le nombre total de livres en stock.\n");
printf("command > ");
scanf("%d",&choix);
return choix ;
}

/*
void displayLivres(){
    char title[maxLentgh][maxLentgh] = {"Antigone","Sidi moulay L3rbi","AntiKhristos"};
    int price[maxLentgh] = {100,200,150};
    for(int i = 0 ; i < AllLivres ;i++){
        printf("Titles : %s\n",title[i]);
        printf("Price : %d\n",price[i]);
    }
}
*/

int main(){
    livres livre[50];



switch(commands()){
// Add Book
case 1:
    printf("Ajoute :\n");
    printf("------------------\n");
    printf("\nEnter Book Name       :");
    fflush(stdin);
    gets(livre[counter].name);
    printf("\nEnter Auteur Name   :");
    gets(livre[counter].auteur);
    printf("\nEnter Price Name    :");
    scanf("%f",&livre[counter].price);
    printf("\nEnter Quantity Name :");
    scanf("%d",&livre[counter].quantity);
    counter++;
    printf("\n%d",counter);
    printf("Press Any Key To Back To Menu ... %c",getchar());
    getchar();
    main();
    break;

// affiche Book
case 2:
    printf("Afficher Les Donnes :\n");
    for(int i = 0;i<=counter;i++){
        printf("_______________________");
        printf("\nName    : %s\n",livre[i].name);
        printf("Auteur   : %s\n",livre[i].auteur);
        printf("Price    : %.2f\n",livre[i].price);
        printf("Quantity : %d\n",livre[i].quantity);
    }
    printf("Press Any Key To Back To Menu ... %c",getchar());
    getchar();
    main();
    break;
case 3:
    printf("This Command Under maintenance");
    break;
case 4:
    printf("This Command Under maintenance");
    break;
case 5:
    printf("This Command Under maintenance");
    break;
case 6:
    printf("This Command Under maintenance");
    break;
default:
    main();
}














return 0;
}
