#include <stdio.h>

int main(){
    //Zad. 1.1
    double a;
    printf("Podaj a: ");
    scanf("%lf", &a);
    printf("a = %lf\n", a);

    //Zad. 1.2
    getchar();
    char b[20];
    printf("Podaj napis: ");
    scanf("%19[^\n]", b);
    printf("Napis: %s\n", b);

    //Zad. 1.3
    getchar();
    char c[20];
    printf("Podaj napis: ");
    fgets(c, 20, stdin);
    printf("Napis: %s", c);
    return 0;
}