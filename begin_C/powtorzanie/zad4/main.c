#include <stdio.h>
#include <stdlib.h>
int max(int a, int b)
{
   if(a - b < 0)
    return b;
   else if(a - b > 0)
    return a;
   else
    return 0;
}
int min(int a, int b)
{
    return a + b - max(a, b);
}
int main()
{
    printf("min: %d", min(6, 15));
    return 0;
}
