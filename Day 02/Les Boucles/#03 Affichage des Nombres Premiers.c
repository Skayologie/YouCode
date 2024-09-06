#include <stdio.h>
int main(){
    int nmbr;
    printf("Enter The Stop Number : ");
    scanf("%d",&nmbr);
    printf("Les nombres premiers : \n");
    for (int i = 2 ; i < nmbr ; i++ ){
        int test = 1;
        for(int j = 2;j<i;j++){
            if(i%j== 0){
                test=0;
            }
        }
        if(test == 1){
            printf("%d\n",i);
        }
    }

    return 0;
}
