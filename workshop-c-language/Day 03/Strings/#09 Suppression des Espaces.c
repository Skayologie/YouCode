#include <stdio.h>
#include <string.h>

int main(){
    char chaine[100];
    printf("Enter The Chaine Of Caracters :");
    gets(chaine);
    int esp = 0 ;
    char withoutSpace[100];
    int j = 0;
    for (int i = 0; i < strlen(chaine); i++)
    {
        if (chaine[i]!=' ')
        {
            withoutSpace[j] = chaine[i];
            j++;
        }
    }
    printf("With Space : %s\n",chaine);
    printf("Without Space : %s",withoutSpace);
    

    return 0;
}
