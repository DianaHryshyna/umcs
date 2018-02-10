#include <stdio.h>
#include <stdlib.h>
int* funkcja(int* tab1, int* tab2, int* tab3, int rozmiar){
    int* tab4 = malloc(rozmiar* sizeof(int*));
    int i;
    for(i = 0; i < rozmiar; i++){
        if(*(tab1 + i) >= 0){
            *(tab4 + i) = *(tab2 + i);
        }
        else{
            *(tab4 + i) = *(tab3 + i);
        }
    }
    return tab4;
}
int main()
{
    int rozmiar;
    int *tab4;
    int i;

    printf("Enter rozmiar: ");
    scanf("%d", &rozmiar);

    printf("Enter tab1: ");
    int* tab1 = malloc(rozmiar* sizeof(int*));
    for(i = 0; i < rozmiar; i++){
        scanf("%d", tab1 + i);
    }

    printf("Enter tab2: ");
    int* tab2 = malloc(rozmiar* sizeof(int*));
    for(i = 0; i < rozmiar; i++){
        scanf("%d", tab2 + i);
    }

    printf("Enter tab3: ");
    int* tab3 = malloc(rozmiar* sizeof(int*));
    for(i = 0; i < rozmiar; i++){
        scanf("%d", tab3 + i);
    }

    tab4 = funkcja(tab1, tab2, tab3, rozmiar);
    for(i = 0; i < rozmiar; i++){
        printf("%d ", *(tab4 + i));
    }

    return 0;
}
