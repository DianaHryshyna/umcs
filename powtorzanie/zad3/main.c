#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float trzecie(float x, float y, float x1, float y1)
{
    return sqrt(powf(1.0*x - 1.0*x1,2.0) + powf(1.0*y - 1.0*y1,2.0));
}
int main()
{
    printf("%.2f", trzecie(5, 7, 4, 3));
    return 0;
}
