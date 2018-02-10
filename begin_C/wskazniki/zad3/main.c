#include <stdio.h>
#include <stdlib.h>
int* max(int *a, int *b){
    return a > b ? a : b;
}
int main()
{
    int a = 10;
    int b = 20;

    //wartosc
    printf("Max = %d", max(&a, &b));
    return 0;
}
