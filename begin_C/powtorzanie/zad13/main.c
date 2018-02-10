#include <stdio.h>
#include <stdlib.h>
void f()
{
    int n;
    int sum = 0;
    while(sum < 100)
        {
            scanf("%d", &n);
            sum = sum + n;
        }
    printf("%d", n);
}
int main()
{
    f();
    return 0;
}
