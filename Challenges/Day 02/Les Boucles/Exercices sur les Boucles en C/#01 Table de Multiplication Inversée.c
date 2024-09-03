#include <stdio.h>
int main(){
    int nombre;
    int i = 10;
    // 5 * 10 = 50 5 * 9 = 45 5 * 8 = 40 ... 5 * 1 = 5
    printf("Enter The Nomber :");
    scanf("%d",&nombre);
    for(i;i!=0;i--){
        int res = nombre * i ;
        printf("%d * %d = %d\n",nombre,i,res);
    }

    return 0;
}
