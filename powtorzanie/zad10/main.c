#include <stdio.h>
#include <stdlib.h>
int f(int n)
{
  return n + (n-1) + (n-2);
}
int main()
{
    printf("%d", f(5));
    return 0;
}
