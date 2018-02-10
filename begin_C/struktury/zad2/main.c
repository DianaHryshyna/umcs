#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Punkt{
    int x;
    int y;
    int z;
};

float dlugosc(struct Punkt a, struct Punkt b){
    float wynik = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
    return wynik;
}

int main()
{
    struct Punkt a = {1, 2, 3};
    struct Punkt b = {4, 5, 6};
    printf("%f", dlugosc(a, b));
    return 0;
}
