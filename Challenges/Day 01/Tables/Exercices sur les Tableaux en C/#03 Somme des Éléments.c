#include <stdio.h>

int main(){

    int s , i , sum;
    sum=0;
    printf("le nombre d'elements : ");
    scanf("%d",&s);

    int table[s];
    int k;
    for(i=0; i<s;i++){
        printf("Enter The number : ");
        scanf("%d",&k);
        table[i] = k ;
        sum += k ;

    }
    printf("%d",sum);

    return 0;
}


