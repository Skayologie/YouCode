#include <stdio.h>
#include <string.h>
int main(){
    //variables
    int a,b,c,Moyeen,sum;

    printf("Enter The three nombres To Calculate Geometry :\n");
    scanf("%d %d %d",&a,&b,&c);
    sum = (a * b * c);
    Moyeen = pow(sum,2);

    printf("%d",Moyeen);

    return 0;
}
