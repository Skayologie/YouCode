#include <stdio.h>
#include <string.h>
int main(){
    //variables
    int sum,a,b,c,result;

    printf("Enter The 3 Numbers :");
    scanf("%d %d %d",&a,&b,&c);

    sum = (a*2) + (b*3) + (c*5);
    result = sum / 10 ;

    printf("The result is : %d",result);

    return 0;
}
