#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1;
    int x2;
    int y1;
    int y2;
    int pole;
    scanf("%d", &x2);
    scanf("%d", &x1);
    scanf("%d", &y2);
    scanf("%d", &y1);
    pole = abs((x2 - x1)) * abs((y1 - y2));
    printf("Pole = %d", pole);
    return 0;
}
