#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void wczytaj(int current, int rozmiar);
void output(int tab[], int rozmiar);
void funkcja(int tab[], int rozmiar);
bool isElementlnArray(int el, int tab[], int left, int right);

int main()
{
    int tab[1000];
    int rozmiar;
    printf("Enter rozmiar:");
    scanf("%d", &rozmiar);
    printf("Enter %d liczb", rozmiar);
    int i;
    for(i = 0; i < rozmiar; i++){
        scanf("%d", &tab[i]);
    }
    output(tab, rozmiar);
    printf("\n");
    funkcja(tab, rozmiar);
    output(tab, rozmiar);
    return 0;
}

bool isElementlnArray(int el, int tab[], int left, int right){
    int i;
    for(i = left; i < right; i++){
        if(tab[i] == el){
                return true;
        }
    }
    return false;
}

void Null(int el, int tab[], int rozmiar){
    int i;
    for(i = 0; i < rozmiar; i++){
        if(tab[i] == el){
            tab[i] = 0;
        }
    }
}

void output(int tab[], int rozmiar){
    int i;
    for(i = 0; i < rozmiar; i++){
        printf("%d ", tab[i]);
    }
}

void funkcja(int tab[], int rozmiar){
    int i;
    for(i = 0; i < rozmiar - 1; i++){
        if(isElementlnArray(tab[i], tab, i + 1, rozmiar - 1) == true){
            Null(tab[i], tab, rozmiar);
    }
    }
}

