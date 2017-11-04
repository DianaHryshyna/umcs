#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double pierw(int n)
{
    return floor(powf(n, 1.0/3));
}
int main()
{
    printf("%.2f", pierw(9));
    return 0;
}
