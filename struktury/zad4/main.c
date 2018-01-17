#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Complex{
    float rz;
    float u;
} C;

float modul(C* a){
    return sqrt(a -> rz * a -> rz + a -> u * a -> u);
}

C sum(C* a, C* b){
    C wynik = {(b -> rz + a -> rz), (b -> u + a -> u)};
    return wynik;
}

int main()
{
    C a = {1, 2};
    C b = {2, 1};

    printf("%.2f\n", modul(&a));
    C wynik = sum(&a, &b);
    printf("%.2f, %.2f", wynik.rz, wynik.u);


    return 0;
}
