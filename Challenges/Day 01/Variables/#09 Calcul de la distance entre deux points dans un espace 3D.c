#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    //variables
    int x1,y1,z1;
    int x2,y2,z2;
    float res1,res2,res3;
    float Distance;

    printf("Enter The X1 Value : ");
    scanf("%d",&x1);

    printf("Enter The Y1 Value : ");
    scanf("%d",&y1);

    printf("Enter The Z1 Value : ");
    scanf("%d",&z1);


    printf("Enter The X2 Value : ");
    scanf("%d",&x2);

    printf("Enter The Y2 Value : ");
    scanf("%d",&y2);

    printf("Enter The Z2 Value : ");
    scanf("%d",&z2);


    res1 = pow(x2,2)-pow(x1,2);
    res2 = pow(y2,2)-pow(y1,2);
    res3 = pow(z2,2)-pow(z1,2);

    Distance = sqrt(res1 + res2 + res3);

    printf("This is the result : %.2f",Distance);

    return 0;
}
