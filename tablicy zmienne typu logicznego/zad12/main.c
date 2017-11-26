#include <stdio.h>
#include <stdlib.h>
void funkcja(int tab[], int a);
void change(int tab[], int rozmiar);
void wyswietli(int tab[], int rozmiar);

int main()
{
    int tab[1000];
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    funkcja(tab, a);
    return 0;
}

void funkcja(int tab[], int a){
    int i = 0;
    while(a > 0){
        int reszta = a % 2;
        tab[i] = reszta;
        a /= 2;
        i++;
    }
    change(tab, i);
    wyswietli(tab, i);
}

void change(int tab[], int rozmiar){
    int k = 0;
    int i;
    for(i = 0; i < rozmiar / 2; i++){
        k = tab[i];
        tab[i] = tab[rozmiar - 1 - i];
        tab[rozmiar - 1 - i] = k;
    }
}

void wyswietli(int tab[], int rozmiar){
    int i;
    for(i = 0; i < rozmiar; i++){
         printf("%d ", tab[i]);
    }
}
