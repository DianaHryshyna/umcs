#include <stdio.h>
#include <stdlib.h>
int UsuniecieLiczb(int** tab, int ilosc_wierszy){
    int i = 0, j;
        for(k = 0; k < n; k++){
            for(; i < n; i++){
                for(j = 1; j < m; j++){
                   if(tab[i][j] % tab[k][0] == 0){
                }
            }
        }
    }
}
int main()
{
    int i, j;
    int** tab = malloc(n* sizeof(int**));
    for(i = 0; i < n; i++){
        tab[i] = malloc(m* sizeof(int*));
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &tab[i][j]);
        }
    }



    return 0;
}
