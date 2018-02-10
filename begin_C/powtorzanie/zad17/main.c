#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int x)
{
    int ilecyfr = 0;
    int d;
    while(x != 0)
    {
       d = x % 10;
       if(d % 3 == 0)
       {
           ilecyfr++;
       }
       x = x / 10;
    }
    return ilecyfr;
}
int main()
{
    printf("Liczba cyfr podzielienych przez 3 = %d", f(356));
    return 0;
}
