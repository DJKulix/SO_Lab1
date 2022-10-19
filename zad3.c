#include <stdio.h>

double sequence(int a){
    if(a == 0 )
        return 1;
    if(a == 1)
        return 4;
    else
        return 2 * sequence(a-1) + 0.5 * sequence(a-2);
}

int main(){
    printf("a(5) = %lf", sequence(5));
    return 0;
}