#include <stdio.h>
#include <stdlib.h>

int** funkcja(int** tab1, int n, int m){
    int i, j;
    int** tab2 = malloc(n* sizeof(int**));
    for(i = 0; i < n; i++){
        tab2[i] = malloc(m* sizeof(int*));
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(*(*(tab1 + i) + j) % 2 == 0){
                *(*(tab2 + i) + j) = *(*(tab1 + i) + j) * 3;
            }
            else{
                *(*(tab2 + i) + j) = *(*(tab1 + i) + j) + 1;
            }
        }
    }
    return tab2;
}
int main()
{
    int i, j, n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int** tab1 = malloc(n* sizeof(int**));
    for(i = 0; i < n; i++){
        tab1[i] = malloc(m* sizeof(int*));
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            *(*(tab1 + i) + j) = i*j + 3;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", *(*(tab1 + i) + j));
        }
        printf("\n");
    }

    printf("\n");
    int** tab2 = funkcja(tab1, n, m);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ", *(*(tab2 + i) + j));
        }
        printf("\n");
    }
    return 0;
}
