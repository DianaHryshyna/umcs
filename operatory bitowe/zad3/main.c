#include <stdio.h>
#include <stdlib.h>

int ustawiony(int a, int b){
    return a & (1 << (b - 1));
}
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf(!ustawiony(a, b) ? "Nie jest ustawiony" : "Jest ustawiony");
    return 0;
}
