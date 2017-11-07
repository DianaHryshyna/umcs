#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float fun(int x, int y)
{
    float cos = x / pow(x * x + y * y, 1.0/2.0);
    return cos;
}
int main()
{
    printf("cos = %f", fun(5, 4) );
    return 0;
}
