#include <stdio.h>
#include <stdlib.h>
unsigned f(unsigned x, unsigned y)
{
    if (x == 0)
       return y;
    else if (y == 0)
       return x;
    else if (x > 0 && y > 0)
       return f(x-1,y) + f(x,y-1);
}
int main()
{
    printf("%d", f(2,3));
    return 0;
}
