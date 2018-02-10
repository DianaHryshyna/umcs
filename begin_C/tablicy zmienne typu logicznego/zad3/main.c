#include <stdio.h>
#include <stdlib.h>
int main()
{
    float sum = 0;
    float m[1000];
    int i;
    for(i = 0; i < 5; i++){
        scanf("%f", &m[i]);
        sum = sum + m[i];
    }
    for(i = 0; i < 5; i++){
        printf("%.2f ", m[i]);
    }
    printf("\nSum = %.2f", sum);
    float srednia = sum/5;
    printf("\nSrednia = %.2f", srednia);
    return 0;
}
