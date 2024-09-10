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
// Commands Function
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

// Showing Function
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

// Add Function
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
    livre[counter].id = counter+1 ;
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
                livre[i].id = livre[i+i].id;
                stccpy(livre[i].name,livre[i+i].name);
                stccpy(livre[i].auteur , livre[i+i].auteur);
                livre[i].price = livre[i+i].price;
                livre[i].quantity = livre[i+i].quantity;
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

//Update Function
void Update(){
    int idUpdate ;
    printf("Update :\n");
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
            printf("\nEnter The Name Of New Quantity : ");
            scanf("%s",&livre[i].name); 
            
            printf("\nEntre The New Quantity       : ");
            scanf("%d",&livre[i].quantity); 
        
        }
        
    }
    printf("\nPress Any Key To Back To Menu ... %c",getchar());
    getchar();
    main();
    }




//Total Books Function
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

// Search Function
void Search(){
    system("clear");
    char name[100];
     if (counter != 0){
        fflush(stdin);
        printf("Enter The Book Name : ");
        gets(name);
    for(int i = 0; i<counter;i++){
            if(strcasecmp(name,livre[i].name)==0){
                printf("Book Founded !\n");
                printf("Name     : %s\n",livre[i].name);
                printf("Auteur   : %s\n",livre[i].auteur);
                printf("price    : %f\n",livre[i].price);
                printf("quantity : %d\n",livre[i].quantity);
                printf("Press Any Key To Back ... %c",getchar());
                getchar();
                main();
            }else{
                printf("Book Not Found !");
                printf("Press Any Key To Back ... %c",getchar());
                getchar();
                main();
            }
        }
        
        
    }
    else{
            printf("There Is No Book In Library !\nPress Any Key TO Back To Menu ... %c",getchar());
            getchar();
            main();
        }
}

// The Main Function
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
    Search();
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
