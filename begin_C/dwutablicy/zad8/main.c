#include <stdio.h>
#include <stdlib.h>

void zwalniam(char **tab, int n);
char** adres(int n, int m);
int szukaj(char **tab, int n, int m, char szukane);
int sprawdz(char **tab1, char **tab2, int n1, int m1, int n2, int m2);

int main()
{
    int n, m, i, j;
    scanf("%d", &n);
    scanf("%d", &m);

    char** tab1 = adres(n, m);
    char** tab2 = adres(n, m);


    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%c", &tab1[i][j]);
        }
    }
    printf("Drugi:");

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%c", &tab2[i][j]);
        }
    }

    if(sprawdz(tab1, tab2, n, m, n, m) && sprawdz(tab2, tab1, n, m, n, m)){
        printf("takie same");
    }
    else{
        printf("Rozne");
    }

    zwalniam(tab1, n);
    zwalniam(tab2, n);

    return 0;
}

int szukaj(char **tab, int n, int m, char szukane){
    int i, j;
    for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(tab[i][j] == szukane) return 1;
            }
    }
    return 0;
}

int sprawdz(char **tab1, char **tab2, int n1, int m1, int n2, int m2){
    int i, j;
    for(i = 0; i < n1; i++){
        for(j = 0; j < m1; j++){
            if(!szukaj(tab2, n2, m2, tab1[i][j])) return 0;
        }
    }
}


char** adres(int n, int m){
    char **tab = malloc(n* sizeof(char**));
    int i;
    for(i = 0; i < n; i++){
        tab[i] = malloc(m* sizeof(char*));
    }
    return tab;
}

void zwalniam(char **tab, int n){
    int i;
    for(i = 0; i < n; i++)
        free(tab[i]);
    free(tab);
}
