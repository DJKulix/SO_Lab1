
#include <stdio.h>

int main(){
    //Zad. 1
    int a;
    float b;
    char c[20];
    printf("Podaj int: ");
    scanf("%d", &a);
    printf("a = %d\n", a);
    printf("Podaj float: ");
    scanf("%f", &b);
    printf("b = %f\n", b);
    getchar();
    printf("Podaj napis: ");
    fgets(c, 20, stdin);
    printf("c = ");
    puts(c);

    return 0;
}