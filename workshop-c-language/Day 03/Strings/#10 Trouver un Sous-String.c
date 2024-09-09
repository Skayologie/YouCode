#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char ChainePrincipale[100]="Hello I am Jawad And I am A student on youcode in sas periode";
    char Nom[25] = "Jawad";
    int exist = false;
    for(int i = 0;i<strlen(ChainePrincipale);i++){
        for (int j = 0; j < strlen(ChainePrincipale); j++)
        {
            if (Nom[0] == ChainePrincipale[0])
            {
                printf("Exist");
            }else{
                printf("Not Exist\n");
            }
        }
        
        
        
    }
    
    return 0;
}
