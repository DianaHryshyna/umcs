#include <stdio.h>
#include <stdlib.h>

float trojkot(float a, float h)
{
    return (a*h)/2.0;
}
int main()
{
    float pole = trojkot(5.0,7.0);
    printf("Pole = %.2f \n", pole);
    return 0;
}
