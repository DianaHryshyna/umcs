#include <stdio.h>
#include <stdlib.h>
int* funkcja(){
    float *a = malloc(sizeof(float*));
    return a;
}
int main()
{
    printf("%d", funkcja());
    return 0;
}
