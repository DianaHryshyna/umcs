#include <stdio.h>
#include <stdlib.h>
int modul(int x, int y)
{
    return (abs(x) + abs(y))/2.0;
}
int main()
{
    printf("%d", modul(5, 10));
    return 0;
}
