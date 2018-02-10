#include <stdio.h>
#include <stdlib.h>
int pow(int a, int n)
{
    if(n == 0)
    return 1;
    else
    return pow(a, (n-1)*a);

}

int main()
{
    printf("%d\n", pow(3,2));
    return 0;
}
