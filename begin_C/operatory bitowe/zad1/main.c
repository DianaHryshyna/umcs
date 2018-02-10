#include <stdio.h>
#include <stdlib.h>

int parzysta(int a){
    return a & 1;
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf(parzysta(a)? "Nie jest parzysta": "Jest parzysta");
    printf(parzysta(b)? "\nNie jest parzysta": "\nJest parzysta");
    return 0;
}
