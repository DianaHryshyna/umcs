#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, a2, b1, b2, n;
    printf("Enter a1:");
    scanf("%d", &a1);
    printf("Enter a2:");
    scanf("%d", &a2);
    printf("Enter b1:");
    scanf("%d", &b1);
    printf("Enter b2:");
    scanf("%d", &b2);
    printf("Enter n:");
    scanf("%d", &n);
    if (a1 < n && a2 < n && b1 < n && b2 < n)
    {
    if (a1 < b1 && b1 < a2 && a2 < b2)
    {
        int i = 0;
        while(b1 <= a2)
        {
          printf("%d \n", b1);
          b1 = b1 + 1;
        }
    }
    else if(b1 < a1 && a1 < b2 && b2 < a2)
    {
       while(a1 <= b2)
       {
           printf("%d \n", a1);
           a1 = a1 + 1;
       }
    }
    else if(a1 < b1 && b1 < b2 && b2 < a2)
    {
        while(b1 <= b2)
        {
            printf("%d \n", b1);
            b1 = b1 + 1;
        }
    }
    else if(b1 < a1 && a1 < a2 && a2 < b2)
    {
        while(a1 <= a2)
        {
            printf("%d \n", a1);
            a1 = a1 + 1;
        }
    }
    else if(b2 < a1 || a2 < b1)
    {
        printf("Puste");
    }
    }
    else
    {
        printf("Puste");
    }
    return 0;
}
