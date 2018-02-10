#include <stdio.h>
#include <stdlib.h>
void zwalniam(int **tab, int n);
int** adres(int n, int m);
int Indeks_Wiersza_MaxSum(int **tab, int n);

int main()
{
    int n, m, i, j;
    scanf("%d", &n);
    scanf("%d", &m);
    int** tab1 = adres(n, m);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            tab1[i][j] = j*i;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", tab1[i][j]);
        }
        printf("\n");
    }

    int indeks = Indeks_Wiersza_MaxSum(tab1, n);
    printf("%d", indeks);
    /*zwalniam(tab1, n);
    printf("\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", tab1[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}

int** adres(int n, int m){
    int **tab1 = malloc(n* sizeof(int**));
    int i;
    for(i = 0; i < n; i++){
        tab1[i] = malloc(m* sizeof(int*));
    }
    return tab1;
}

void zwalniam(int **tab, int n){
    int i;
    for(i = 0; i < n; i++)
        free(tab[i]);
    free(tab);
}

int Indeks_Wiersza_MaxSum(int **tab, int n){
    int i, k, sum = 0, max = 0, indeks;
    for(i =0; i < n; i++){
            for(k = 0; k < n; k++){
                sum = sum + tab[i][k];
            }
                if(i == 0){
                    max = sum;
                    indeks = i;
                }
                else{
                    if(sum > max){
                        max = sum;
                        indeks = i;
                    }
                }
    }
    return i;
}
