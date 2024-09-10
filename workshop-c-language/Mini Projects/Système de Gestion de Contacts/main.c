#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nom[100];
    char num_de_tele[100];
    char adress_email[100]; 
}contacts;
contacts contact[100];
int menu_choix;
int contact_counter=0;
void backToMenu(){
    printf("\nPress Any Key To Back Menu ...%c",getchar());
    getchar();
    main();
}
void menu(){
    system("clear");
    printf("----------------------MENU----------------------\n");
    printf("|%-5s %-35s %-5s|\n"," ","1 > Ajouter Un Contact ."," ");
    printf("|%-5s %-35s %-5s|\n"," ","2 > Modifier un Contact ."," ");
    printf("|%-5s %-35s %-5s|\n"," ","3 > Supprimer un Contact ."," ");
    printf("|%-5s %-35s %-5s|\n"," ","4 > Afficher Tous les Contacts ."," ");
    printf("|%-5s %-35s %-5s|\n"," ","5 > Rechercher un Contact ."," ");
    printf("|%-5s %-35s %-5s|\n"," ","6 > Exit ."," ");
    printf("\nCommand > ");
    scanf("%d",&menu_choix);
}   


void ajoute(){
    int ajoute_number;
    // printf("\nCombien de contact souhaitez-vous ajouter ?  :");
    // scanf("%d",&ajoute_number);
    system("clear");
    printf("Ajouter un contact  \n\n");
    // for (int i = contact_counter; i < ajoute_number; i++)
    // {   
        system("clear");
        printf("Contact #%d\n",contact_counter+1);
        fflush(stdin);
        printf("\nAjouter Le nom                 :");
        scanf("%s",contact[contact_counter].nom);
        strcpy(contact[contact_counter].nom,strlwr(contact[contact_counter].nom));
        fflush(stdin);

        printf("Ajouter Le Numero de telephone :");
        scanf("%s",contact[contact_counter].num_de_tele);
        fflush(stdin);

        printf("Ajouter La Adresse e-mail      :");
        scanf("%s",contact[contact_counter].adress_email);
        strcpy(contact[contact_counter].adress_email,strlwr(contact[contact_counter].adress_email));
        

        printf("\nLe contact %d a ete ajoute avec succes ! \n",contact_counter+1);
        
        contact_counter++;
        sleep(1);


    // }
    // ajoute_number = 0;
    backToMenu();
    
}

void affichez_les_contact(int i){
            printf("Contact #%d\n\n",i+1);
            printf("Le Nom                 : %s\n",contact[i].nom);
            printf("Le Numero de telephone : %s\n",contact[i].num_de_tele);
            printf("La Adresse e-mail      : %s\n",contact[i].adress_email);
            printf("------------------------------------------------\n");
}


void afficher(){
    system("clear");
    if (contact_counter!=0){
        printf("Tous :\n\n");
        for (int i = 0; i < contact_counter; i++){
            affichez_les_contact(i);
        }
    }
    else{
        printf("il n'y a pas de données ici !!");
    }
    backToMenu();
}

void Modifier(){
    system("clear");
    char name_search[100];
    int found_contact = 0;
 if (contact_counter != 0){
    
    printf("Modification des information :\n");
    printf("Entrez le nom du contact : ");
    scanf("%s",name_search);
    
    for (int i = 0; i < contact_counter; i++){
      if (strcmp(contact[i].nom,strlwr(name_search))==0)
      {
        system("clear");
        affichez_les_contact(i);
        
        printf("Modifier Contact #%d\n",i+1);
        fflush(stdin);
        printf("\nModifier Le Nouveux Email              :");
        scanf("%s",contact[i].adress_email);
        fflush(stdin);

        printf("Modifier Le Nouveux Numero             :");
        scanf("%s",contact[i].num_de_tele);
        fflush(stdin);
        
        if (strcmp(contact[i].num_de_tele,contact[i].num_de_tele)==0)
        { 
            printf("Update Successfully !");
            sleep(1.5);
            backToMenu();
        }else{
            printf("Update Not Successfully !");
            sleep(1.5);
            backToMenu();
        }
        

      }else{
        printf("Le nom du contact n'a pas ete trouve\n");
        backToMenu();
      }
    }}else{
        printf("Il n'y a pas de donnees pour Modification !!");
        backToMenu();
    }
}



void Recherche(){
    char SearchChar[100] ;
    printf("Search :\n\n");
    if (contact_counter != 0)
    {
        printf("Entrez le nom ou l'e-mail que vous recherchez : ");
        scanf("%s",SearchChar);
        for (int i = 0; i < contact_counter; i++){
            if (strcmp(strlwr(contact[i].nom),strlwr(SearchChar))==0 || strcmp(strlwr(SearchChar),strlwr(contact[i].adress_email)) == 0){
                printf("Le contact existe !\n");
                printf("------------------------------------------------");
                printf("le nom                    : %s\n",contact[i].nom);
                printf("Le Numero De Telephone    : %s\n",contact[i].num_de_tele);
                printf("La Adresse e-mail         : %s\n",contact[i].adress_email);
                printf("------------------------------------------------");
                backToMenu();
            }else{
                printf("Le contact n'existe pas");
                backToMenu();
            }
        }
    }else{
        system("clear");
        printf("Il n'y a pas de donnees a rechercher dans !!");
        backToMenu();
    }
    
    
    


}






int casesSwitch(){
    menu();
    switch (menu_choix){
    case 1:
        ajoute();
        break;
    case 2:
        Modifier();
        break;
    case 4:
        afficher();
        break;
    case 5:
        Recherche();
        break;
    case 6:
        printf("Au revoir ! ;)");
        exit(0);
        break;
    default:
        backToMenu();
        break;
    }
}
void parDefault(int i, char name[] , char num[] , char mail[]){
    
    for (int i = 0; i < contact_counter; i++)
    {
        strcpy(name,contact[i].nom);
        strcpy(num,contact[i].num_de_tele);
        strcpy(mail,contact[i].adress_email);
    }
}

int main(){
    // parDefault(3,"jawad","num","mail");
    casesSwitch();
    return 0;
}
