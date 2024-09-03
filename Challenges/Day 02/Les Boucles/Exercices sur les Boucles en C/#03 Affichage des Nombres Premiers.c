#include <stdio.h>
int main(){
    int number;
    printf("Enter The Number : ");
    scanf("%d",&number);
    printf("Les nombres premiers de 1 à %d sont : ",number);
    for(int i = 1;i <= number ; i++){
        int iSThat = i%2;
        if(iSThat == 1)
            printf("%d ",i);
    }

    return 0;
}
