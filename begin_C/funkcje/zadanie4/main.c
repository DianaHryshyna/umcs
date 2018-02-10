#include <stdio.h>
#include <stdlib.h>
int kwadrat(int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d \n", i*i);
        }
    }

}

int main()
{
    kwadrat(7);
    return 0;
}
