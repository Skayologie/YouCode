#include <stdio.h>

int main(){
    //variables


    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int table[size]  ;
    for(int i= 0; i< size ; i++){
        printf("Enter All Values : ");
        scanf("%d",&table[i]);
    }
    int Grather=table[0];
    for(int i= 0;i<size;i++){
        if(table[i] <= Grather){
            Grather = table[i];
        }
    }
    printf("This is the Big Number : %d",Grather);



    return 0;
}
