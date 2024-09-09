#include <stdio.h>
#include <string.h>

int main(){
    char chaine [100];
    printf("Word is : ");
    gets(chaine);

    for (int i = 0; chaine[i] != '\0'; i++)
    {
        if (chaine[i] >= 'A' && chaine[i] <= 'Z')
        {
            chaine[i] = chaine[i]+32;
        }
        
    }
    printf("Minuscules Version  : %s",chaine);

    return 0;
}
