#include <stdio.h>
#include <stdlib.h>
void fun(unsigned n)
{
    printf("Enter n ");
    scanf("%d", &n);
    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}

int main()
{
    fun(0);
    return 0;
}
