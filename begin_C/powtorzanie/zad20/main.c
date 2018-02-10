#include <stdio.h>
#include <stdlib.h>
unsigned f(unsigned x, unsigned y)
{
    if(x == y)
    {
        return x;
    }
    else if(x > y)
    {
        return 2 * f(x / y, y);
    }
    else
        return 2 * f(x, y / x);
}
int main()
{
    printf("%d", f(2, 3));
    return 0;
}
