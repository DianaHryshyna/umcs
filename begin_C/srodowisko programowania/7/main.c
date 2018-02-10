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
    float srednia = 3/(1/a + 1/b + 1/c);
    printf("%.2f", srednia);
    return 0;
}
