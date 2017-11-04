#include <stdio.h>
#include <stdlib.h>
void trojkot(float a, float b, float c)
{
    if(a > 0 && b > 0 && c > 0)
    {
        if(a*a + b*b == c*c
               || b*b + c*c == a*a
               || a*a + c*c == b*b)
        {
            printf("T");
        } else
        {
            printf("N");
        }
    }
    else
    {
        printf("N");
    }

}

int main()
{
    trojkot(3, 4, 5);
    return 0;
}
