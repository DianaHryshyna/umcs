#include <stdio.h>
#include <stdlib.h>
int fun(int n)
{
    if(n < 6)
    {
        return n;
    }
    if(n >= 6)
    {
        int i;
        int sum = 0;
        for(i = 1; i <= 3; i++)
        {
            sum += fun(n - 2 * i);
        }
        return sum;
    }
}
int main()
{
    printf("%d", fun(2));
    return 0;
}
