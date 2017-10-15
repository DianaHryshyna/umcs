#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Podaj liczbe calkowita:");
    scanf("%d", &a);
    printf("Podaj liczbe calkowita:");
    scanf("%d", &b);
    printf("Podaj liczbe calkowita:");
    scanf("%d", &c);
    if(a > b && a > c)
    {
      printf("\n %d Maximum: %d", a);
    }
    else if(b > c && b > a)
    {
      printf(" %d Maximum: %d", b);
    }
    else
    {
      printf(" %d Maximum: %d", c);
    }
    return 0;
}
