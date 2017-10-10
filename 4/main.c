#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float x;
    float b;
    printf("Enter a:\n");
    scanf("%f", &a);
    printf("Enter x:\n");
    scanf("%f", &x);
    printf("Enter b:\n");
    scanf("%f", &b);
    float y;
    y = a * x + b;
    printf("%f", y);
    return 0;
}
