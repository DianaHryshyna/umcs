#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    float c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float V;
    V = a * b * c;
    printf("%.2f", V);
    return 0;
}