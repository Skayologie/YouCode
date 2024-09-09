#include <stdio.h>
#include <string.h>

int main(){

    char prenom[50] = "Jawad";
    char nom[50] = " Boulmal";

    strcat(prenom,nom);
    printf("%s",prenom);

    return 0;

}
