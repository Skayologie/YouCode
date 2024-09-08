#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    int Longeur = 0;
    int i = 0;

    printf("Enter The Name :");
    scanf("%s",&name);
    
    while(name[i]!='\0'){
        Longeur++;
        i++;
    }

    printf("%d",Longeur);
    return 0;
}
