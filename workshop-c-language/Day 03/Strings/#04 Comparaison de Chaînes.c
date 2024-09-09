#include <stdio.h>
#include <string.h>

int main(){

    char a [20] = "Jawad" ;
    char b [20] = "Youssef" ;
    char c [20] = "Jawad" ;

    if (strcmp(a,b)==0)
        printf("les chaines %s et %s sont egales !\n",a,b);
    else
        printf("les chaines %s et %s sont differentes !\n",a,b);
    
    if(strcmp(a,c)==1)
        printf("les chaines %s et %s sont differentes !\n",a,c);
    else
        printf("les chaines %s et %s sont egales !\n",a,c);

    return 0;

}
