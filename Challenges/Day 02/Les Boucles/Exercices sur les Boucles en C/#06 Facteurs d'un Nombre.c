#include <stdio.h>
int main(){
    int nmbr , fact ;

    printf("Enter The Number : ");
    scanf("%d",&nmbr);

    printf("This is All Number Factorial :\n");
    for(int i = 1;i<=nmbr;i++){

        if(nmbr % i == 0){
            printf("%d\n",i);
        }

    }

    return 0;
}

