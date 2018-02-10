#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("Enter a:");
    scanf("%f", &a);
    printf("Enter b:");
    scanf("%f", &b);
    if(a > 0 && b > 0)
    {
      printf("1, 2, 3 cwiartki");
    }
    else if(a < 0 && b < 0)
    {
      printf("2, 3, 4 cwiartki");
    }
    else if(a > 0 && b < 0)
    {
      printf("1, 3, 4 cwiartki");
    }
    else if(a < 0 && b > 0)
    {
      printf("2, 1, 4 cwiartki");
    }
    else if(a == 0 && b < 0)
    {
      printf("3, 4 cwiartki");
    }
    else if(a == 0 && b > 0)
    {
      printf("1, 2 cwiartki");
    }
    else if(a < 0 && b == 0)
    {
      printf("2, 4 cwiartki");
    }
    else if(a > 0 && b == 0)
    {
      printf("1, 3 cwiartki");
    }
    else if(a == 0 && b == 0)
    {
      printf("Puste");
    }

     return 0;
}
