#include <stdio.h>
#include <string.h>
int main(){
    //variables
    float k , c ;

    printf("Enter The Tempereture On Celsius :");
    scanf("%f",&c);

    k = c + 273.15;

    printf("The Temprature On kelvin Is : %.2f", k);

    return 0;
}

