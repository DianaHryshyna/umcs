#include <stdio.h>
#include <stdlib.h>

int potegowanie(int a){
    return 1 << a;
}
int main()
{
    int a;
    scanf("%d", &a);

    printf("%d", potegowanie(a));
    return 0;
}
