#include <stdio.h>
#include <stdlib.h>
void dzielniki(int a)
{
    int i;
    for(i = 1; i <= a; i++)
    {
       if(a % i == 0)
       {
           printf("%d \n", i);
       }
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    dzielniki(a);
    return 0;
}
