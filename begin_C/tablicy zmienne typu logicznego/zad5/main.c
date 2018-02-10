#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float f(float m[], float m1[], int rozmiar){
    int i;
    for(i = 0; i < rozmiar; i++){
        m[i] = m1[i];
    }

}

int main()
{
    float m[7];
    float m1[7] = {3, 4, 5, 6, 8, 2, 7};
    f(m, m1, 7);
    int i;
    for(i = 0; i < 7; i++){
        printf("%.2f ", m[i]);
    }
    return 0;
}
