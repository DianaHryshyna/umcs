#include <stdio.h>
#include <stdlib.h>

int Max_roznica(int* tab, int rozmiar){
    int i, max = 0, roznica = 0;
    for(i = 0; i < rozmiar; i++){
        if(i == 0){

        }
        else{
            if(*(tab + i) > *(tab + i - 1)){
                roznica = *(tab + i) - *(tab + i - 1);
            }
            else{
                roznica = *(tab + i - 1) - *(tab + i);
            }
            if(roznica > max){
                max = roznica;
            }
        }
    }
    return max;
}

int main()
{
    int i, n;
    printf("Enter rozmiar tablicy: ");
    scanf("%d", &n);
    int* tab = malloc(n* sizeof(int*));
    for(i = 0; i < n; i++){
        scanf("%d", &tab[i]);
    }
    printf("\nMax roznica = %d", Max_roznica(tab, n));
    return 0;
}
