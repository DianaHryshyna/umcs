#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float fun(float a, float b)
{
   float cc;
   float cc1;
   float dc;
   float dc1;
   dc = modf(a, &cc);
   dc1 = modf(b, &cc1);
   if(dc == dc1)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}
int main()
{
    printf("%.0f", fun(-5.38, -6.38));
    return 0;
}
