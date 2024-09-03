#include <stdio.h>
int main(){
    int lignes;

    printf("Enter The Number Of Lignes : ");
    scanf("%d",&lignes);

    for(int i = 0 ; i <= lignes ; i++){
        for(int j = i;j<lignes;j++){
            printf(" ");
        }

        for(int j = 0 ; j < 2*i-1 ; j++){
                 printf("*");
        }

        printf("\n");
    }



    return 0;
}
