#include <stdio.h>
#include <stdlib.h>
int funkcje(int n)
{
    int i;
    int wynik = 0;
    for(i = 0; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            wynik = wynik + i;
        }
    }
    return wynik;
}
int main()
{
    printf("%d \n", funkcje(5));
    return 0;
}
