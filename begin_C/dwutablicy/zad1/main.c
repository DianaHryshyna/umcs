#include <stdio.h>
#include <stdlib.h>
int** adres(int n, int m){
    int **tab1 = malloc(n* sizeof(int**));
    int i;
    for(i = 0; i < n; i++){
        tab1[i] = malloc(m* sizeof(int*));
    }
    return tab1;
}
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
    return 0;
}
