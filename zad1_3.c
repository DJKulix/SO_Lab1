#include <stdio.h>

int main(){
    //Zad. 1.3
    char a[20];
    printf("Podaj napis: ");
    fgets(a, 20, stdin);
    printf("Napis: %s", a);
    return 0;
}