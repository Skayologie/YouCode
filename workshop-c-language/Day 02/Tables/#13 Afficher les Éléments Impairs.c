#include <stdio.h>

int main(){
    int nmbr,rep;
    int t[20];
    printf("Enter Combien D'element :");
    scanf("%d",&nmbr);
    for(int i = 0;i<nmbr;i++){

        printf("Enter The numbers :");
        scanf("%d",&t[i]);

    }
    for(int i = 0;i<nmbr;i++){
        if(t[i] % 2 != 0){
            printf("\nles elements impairs : %d\n",t[i]);
        }
    }
    return 0;
}
