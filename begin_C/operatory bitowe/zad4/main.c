#include <stdio.h>
#include <stdlib.h>

int ustawia(int a, int numer){
    return a | (1 << (numer - 1));
}
int main()
{
    int a;
    scanf("%d", &a);

    int b;
    scanf("%d", &b);

    printf("%d", ustawia(a, b));
    return 0;
}
