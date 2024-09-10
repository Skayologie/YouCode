#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char ChainePrincipale[100]="Hello I am Jawad And I am A student on youcode in sas periode";
    char Nom[25] = "Jawad";
    int exist = false;
        if (strstr(ChainePrincipale,Nom) )
        {
            printf("Founded !");
        }
        else{
            printf("Not Founded !");

        }
        
        
    
    return 0;
}
