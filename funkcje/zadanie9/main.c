#include <stdio.h>
#include <stdlib.h>
int funkcje(int n)
{
    if( n == 0)
        return 1;
    else if(funkcje(2n - 1))
        return n*n;
    else if(funkcje(2*n))
        return n*n - 5;
}
int main()
{
    printf("%d", funkcje(2));
    return 0;
}
