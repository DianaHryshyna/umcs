#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Vektor{
    int Punkt;
    bool turn;
} V;

void Zmienia(V *zmienia){
   zmienia -> turn = !zmienia -> turn;
}

int main()
{
    V a;
    a.turn =1;
    Zmienia(&a);
    printf("%d", a.turn);
    return 0;
}
