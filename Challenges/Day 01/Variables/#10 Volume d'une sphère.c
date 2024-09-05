#include <stdio.h>
#include <string.h>
int main(){
    //variables
    const float pi = 3.14;
    int r , volume;
    printf("Type The rayon : ");
    scanf("%d",&r);

    volume = (4/3) * pi * pow(r,3);
    printf("This is Volume d'une sphere : %d cm",volume);

    return 0;
}
