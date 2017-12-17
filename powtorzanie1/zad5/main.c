#include <stdio.h>
#include <stdlib.h>

int funkcja(float* a, float* b){
    int iloczyn = *a * *b;
    const int int_part =(int)iloczyn;
    if(int_part >= 0){
        return int_part;
    }
    else{
        return int_part - (iloczyn != int_part) - 1;
    }
}

int main()
{
    float* a = malloc(sizeof(float*));
    scanf("%f", a);

    float* b = malloc(sizeof(float*));
    scanf("%f", b);

    printf("%d", funkcja(a, b));
    return 0;
}

