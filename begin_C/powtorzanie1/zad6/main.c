#include <stdio.h>
#include <stdlib.h>

float SumaBrzegow(float** tab, int n, int m);
void zwalniam(float** tab, int n);

int main()
{
    int i, j, n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    float** tab = malloc(n* sizeof(float**));
    for(i = 0; i < n; i++){
        tab[i] = malloc(m* sizeof(float*));
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%f", &tab[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%.2f ", tab[i][j]);
        }
        printf("\n");
    }

    printf("%.2f", SumaBrzegow(tab, n, m));
    return 0;
}

void zwalniam(float** tab, int n){
    int i;
    for(i = 0; i < n; i++)
        free(tab[i]);
    free(tab);
}

float SumaBrzegow(float** tab, int n, int m){
    int j, i;
    float sum0 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum_wynik = 0;
        for(j = 1; j < m - 1; j++){
            sum0 += *(*(tab + 0) + j);
            sum1 += *(*(tab + (n - 1)) + j);
        }
        for(i = 0; i < n; i++){
            sum2 += *(*(tab + i) + 0);
            sum3 += *(*(tab + i) + (m - 1));
        }
        sum_wynik = sum0 + sum1 + sum2 + sum3;
        return sum_wynik;
}
