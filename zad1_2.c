#include <stdio.h>

int main(){
    //Zad. 1.2
    char a[20];
    printf("Podaj napis: ");
    scanf("%19[^\n]", a);
    printf("Napis: %s", a);
    return 0;
}