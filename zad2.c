#include <stdio.h>

int fibo1(int n) {
    int r0 = 0;
    int r1 = 1;
    int r2 = 1;

    if (n == 0)
        return r0;
    if (n == 1)
        return r1;
    if (n == 2)
        return r2;

    int i;
    for (i = 1; i <= n - 2; i++) {
        r0 = r1;
        r1 = r2;
        r2 = r0 + r1;
    }

    return r2;
}

long fibo2(int n) {
    int r0 = 0;
    int r1 = 1;

    if (n == 0)
        return r0;
    if (n == 1)
        return r1;

    int i;
    for (i = 1; i <= n - 1; i++) {
        int temp = r0;
        r0 = r1;
        r1 = r0 + temp;
    }

    return r1;
}

long fibo3(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibo3(n - 1) + fibo3(n - 2);
}

int main() {
    //Zad. 2
    int n = 10;
    printf("Ciag fibonacciego dla n = 6\n");
    printf("fibo1 (6) = %d\n", fibo1(6));
    printf("fibo2 (6) = %ld\n", fibo2(6));
    printf("fibo3 (6) = %ld", fibo3(6));
    return 0;
}