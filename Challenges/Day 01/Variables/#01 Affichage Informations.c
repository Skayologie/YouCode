#include <stdio.h>
#include <string.h>
int main(){
    //variables
    int age;
    char name[25],prenom[25],email[100];
    char sexe;

    printf("Enter The Name : ");
    gets(name);

    printf("Enter The Prenom : ");
    gets(prenom);

    printf("Enter The Age : ");
    scanf("%d",&age);
    fflush(stdin);
    printf("Enter The Email : ");
    gets(email);

    printf("Enter The Sexe : ");
    scanf("%c",&sexe);

    printf("\nYour Complete name Is %s %s ,\nyour age is %d ,\nYour Email is %s ,\nand your sex is %c .\n",name,prenom,age,email,sexe);






    return 0;
}

