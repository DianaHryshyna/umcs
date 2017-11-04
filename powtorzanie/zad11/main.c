#include <stdio.h>
#include <stdlib.h>
int f(double c, double p, double kr)
{
    int b = 0;
    while(c < kr)
    {
        c = c * (p/100) + c;
        ++b;
    }
    return b;
}
int main()
{
    printf("%d", f(20, 10, 70));
    return 0;
}
