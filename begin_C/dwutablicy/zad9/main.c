#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, m, k = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    int **tab = malloc(n* sizeof(int**));
    int **tab1 = malloc(m* sizeof(int**));


    for(i = 0; i < n; i++){
        tab[i] = malloc(m* sizeof(int*));
    }
    for(i = 0; i < m; i++){
        tab1[i] = malloc(n* sizeof(int*));
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            tab[i][j] = j*i;
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            tab1[i][j] = tab[j][i];
        }
    }

    printf("\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", tab1[i][j]);
        }
        printf("\n");
    }



    return 0;
}

int wyznacznik(int tab, int n){
    int i;
    int det;
    if(n == 1){
        det = tab[0][0];
    }
    else if(n == 2){
        det = tab[0][0] * tab[1][1] - tab[1][0] * tab[0][1];
    }
    else{

    }
}
