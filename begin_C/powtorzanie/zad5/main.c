#include <stdio.h>
#include <stdlib.h>
int potega(int p, int n)
{
   return powf(p, n);
}
int main()
{
    printf("p do potegi n = %d", potega(5, 3));
    return 0;
}
