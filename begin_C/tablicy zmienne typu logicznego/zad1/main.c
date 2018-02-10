#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void f(int a, int b, int c){
    bool flad = false;
    if(a + b > c && a + c > b && b + c > a){
        flad = true;
    }
    printf(flad ? "Da sie utworzyc trojkat": "Nie da sie utworzyc trojkat");
}

int main()
{
    int a;
    int b;
    int c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    f(a, b, c);
    return 0;
}
