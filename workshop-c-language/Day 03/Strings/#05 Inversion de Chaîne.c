#include <stdio.h>
#include <string.h>

int main(){
    char word[50] ;
    printf("Enter The Word : ");
    gets(word);

    printf("%s",strrev(word));

    return 0;
}
