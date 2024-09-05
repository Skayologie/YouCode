
#include <stdio.h>
int main(){
    int number , sum = 0;

    printf("Type The Number : ");
    scanf("%d",&number);

    for(int i = 0 ; i <= number ; i++)
        sum = sum + i;

    printf("\nla somme est : %d\n",sum);

    return 0;
}

