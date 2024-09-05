#include <stdio.h>
int main(){
    int rn,n;
    rn = 0;

    printf("enter the number : ");
    scanf("%d",&n);

    int i = 0;
    while(n != 0){
        rn = i * 10 + n % 10;
        n = n/10;
        printf("%d",rn);
    }

    return 0;
}

