#include <stdio.h>
#include <string.h>
#define maxLentgh 100
int choix ;
int counter = 0;
int AllLivres = 0;

typedef struct{
    int id;
    char name[50];
    char auteur[50];
    float price;
    int quantity;
}livres;

livres livre[50];

int commands(){
    system("clear");
    printf("");
    printf("\n");
    printf("|%-1s %-50s %-5s|\n","","1 > Ajouter un livre au stock .","");
    printf("|%-1s %-50s %-5s|\n","","2 > Afficher tous les livres disponibles .","");
    printf("|%-1s %-50s %-5s|\n","","3 > Rechercher un livre par son titre .","");
    printf("|%-1s %-50s %-5s|\n","","4 > Mettre a jour la quantite d'un livre .","");
    printf("|%-1s %-50s %-5s|\n","","5 > Supprimer un livre du stock.");
    printf("|%-1s %-50s %-5s|\n","","6 > Afficher le nombre total de livres en stock.","");
    printf("\ncommand > ");
    scanf("%d",&choix);
    return choix ;
}

void show(){
    if (counter != 0)
    {
        system("clear");
        printf("Afficher Les Donnes :\n");
        for(int i = 0;i<counter;i++){
            printf("\n\n#%d\n",livre[i].id);
            printf("Name      : %s\n",livre[i].name);
            printf("Auteur    : %s\n",livre[i].auteur);
            printf("Price     : %.2f\n",livre[i].price);
            printf("Quantity  : %d\n",livre[i].quantity);
        }
        printf("\nPress Any Key To Back To Menu ... %c",getchar());
        getchar();
        main();
    }else{
        system("clear");
        printf("\nThere Is No Data To Show !!\n");
        printf("Press Any Key To Back To Menu ... %c\n",getchar());
        getchar();
        main();
    }
    
    
}

void Add(){
    system("clear");
    printf("Ajoute :\n");
    printf("\nTotal Books           : %d\n",counter);
    printf("\nEnter Book Name       : ");
    fflush(stdin);
    gets(livre[counter].name);
    printf("Enter Auteur Name     : ");
    gets(livre[counter].auteur);
    printf("Enter Price           : ");
    scanf("%f",&livre[counter].price);
    printf("Enter Quantity        : ");
    scanf("%d",&livre[counter].quantity);
    livre[counter].id = counter ;
    counter++;
    printf("\nPress Any Key To Back To Menu ... %c",getchar());
    getchar();
    main();
}

// Delete Livre //
void delete(){
    int idSupp ;
    printf("Delete :\n");
    printf("\nEnter Book Id Do You Want to delete   :");
    scanf("%d",&idSupp);
    int check = 0;
    for(int i = 0;i<counter;i++){
            if (idSupp-1 == livre[i].id){
                printf("Its Match : %d",i);
            
                // strcpy(livre[i].name,livre[i+1].name);
                // strcpy(livre[i].auteur,livre[i+1].auteur);
                // livre[i].price = livre[i+1].price;
                // livre[i].quantity = livre[i+1].quantity;
                // counter--;
                // check = 1;
                
                livre[i] = livre[i+i];
                counter--;      
                check = 1;
            }
        }
        

    if (check == 1)
            printf("Delete Successfully !");
        else
            printf("Delete UnSuccessfully !");
    printf("\nPress Any Key To Back To Menu ... %c",getchar());
    getchar();
    main();

}

//mise a jour
void Update(){
    int idUpdate ;
    printf("Delete :\n");
    printf("\nEnter Book Id Do You Want to Update   :");
    scanf("%d",&idUpdate);
    for(int i = 0;i< counter;i++){
        if (livre[i].id == idUpdate)
        {   
            int check = 0;
            int answer = 0;
            printf("Current Name     : %s \n",livre[i].name);
            printf("Current Auteur   : %s \n",livre[i].auteur);
            printf("Current Price    : %f \n",livre[i].price);
            printf("Current Quantity : %d \n",livre[i].quantity);
            printf("________________________________\n");
            printf("Do You wan't to update The Name [1 - Y / 2 - N] ? :");
            scanf("%d",&answer);
            fflush(stdin);
            if (answer!=2)
            {
                printf("\nEnter Book Name       : ");
                scanf("%s",&livre[i].name); 
                answer = 2;
                check = 1;
            }
            fflush(stdin);

            printf("Auteur Name ? :");
            scanf("%d",&answer);
            if (answer!=2)
            {
                printf("\nEnter Book Auteur       : ");
                scanf("%s",&livre[i].auteur); 
                answer = 2;
            }
            fflush(stdin);

            printf("Price ? :");
            scanf("%d",&answer);
            if (answer!=2)
            {
                printf("\nEnter Book price       : ");
                scanf("%f",&livre[i].price); 
                answer = 2;
            }
            fflush(stdin);

            printf("Quantity ? :");
            scanf("%d",&answer);
            if (answer!=2)
            {
                printf("\nEntre Quantity       : ");
                scanf("%d",&livre[i].quantity); 
                answer = 2;
            }
            
        }
        
        }
    printf("\nPress Any Key To Back To Menu ... %c",getchar());
    getchar();
    main();
    }




    //Total
    void TotalLivre(){
        int total = 0;
        printf("This is Total \n");
        for (int i = 0; i < counter; i++)
        {
            total = total + livre[i].quantity; 
        }
        printf("le nombre total de livres en stock %d Livres",total);
        printf("\nPress Any Key To Back To Menu ... %c",getchar());
        getchar();
        main();
    }

int main(){
switch(commands()){
// Add Book //
case 1:
    Add();
    break;

// affiche Book //
case 2: 
    show();
    break;
case 3:
    printf("This Command Under maintenance");
    break;
case 4:
    Update();
    break;
case 5:
    delete();
    break;
case 6:
    TotalLivre();
    break;
default:
    main();
}

return 0;
}
