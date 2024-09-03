#include <stdio.h>
#include <string.h>
int main(){
    //variables
    float Yards , Km ;

    printf("Enter The Distance On Km :");
    scanf("%f",&Km);

    Yards = Km * 1093.61;

    printf("The Distance On Yards Is : %.2f",Yards);

    return 0;
}

