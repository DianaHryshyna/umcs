#include <stdio.h>
#include <stdlib.h>
void wynik(float n, float m)
{
    if(m != 0)
    {
        int i;
        for(i = 1; i < n; i++)
        {
           printf("%f\n", i / m);
        }
    }
    else
        printf("puste");

}
int main()
{
    wynik( 5, 3);
    return 0;
}
