#include <stdio.h>
#include <stdlib.h>

void zwalniam(int **tab, int n);
int** adres(int n);
int** Mnozenie_Macierzy(int **tab1, int **tab2, int **tab3, int n);

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int** tab1 = adres(n);
    int** tab2 = adres(n);
    int** tab3 = adres(n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            tab1[i][j] = j*i;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", tab1[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            tab2[i][j] = j*i;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", tab2[i][j]);
        }
         printf("\n");
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            tab3[i][j] = 0;
        }
    }

    int** wynik = Mnozenie_Macierzy(tab1, tab2, tab3, n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ", tab3[i][j]);
        }
        printf("\n");
    }

    zwalniam(tab1, n);

    return 0;
}

int** adres(int n){
    int **tab = malloc(n* sizeof(int**));
    int i;
    for(i = 0; i < n; i++){
        tab[i] = malloc(n* sizeof(int*));
    }
    return tab;
}

void zwalniam(int **tab, int n){
    int i;
    for(i = 0; i < n; i++)
        free(tab[i]);
    free(tab);
}

int** Mnozenie_Macierzy(int **tab1, int **tab2, int **tab3, int n){
    int i, j, k;
    for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                for(k = 0; k < n; k++){
                    tab3[i][j] += tab1[i][k]*tab2[k][j];
                }
            }
    }
    return tab3;
}
