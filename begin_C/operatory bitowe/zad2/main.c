#include <stdio.h>
#include <stdlib.h>

int potega(int a){
    return a & (a - 1);
}

int main()
{
    int a;
    scanf("%d", &a);
    printf(potega(a)? "Nie jest potega" : "Jest potega");
    return 0;
}
