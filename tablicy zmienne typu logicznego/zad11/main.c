#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ConvertFromBinaryToDecimal(int tab[], int rozmiar);
void output(int tab[], int rozmiar);

int main()
{
    int i;
    int rozmiar;
    int tab[1000];
    printf("Enter rozmiar: ");
    scanf("%d", &rozmiar);
    printf("Enter %d liczb: ", rozmiar);
    for(i = 0; i < rozmiar; i++){
        scanf("%d", tab[i]);
    }
    output(tab, rozmiar);
    ConvertFromBinaryToDecimal(tab, rozmiar);
    printf("%d", ConvertFromBinaryToDecimal(tab, rozmiar));
    return 0;
}

int ConvertFromBinaryToDecimal(int tab[], int rozmiar){
    int i;
    int k = 0;
    int sum = 0;
    for(i = 0; i < rozmiar; i++){
        k = tab[i] * pow(2, rozmiar - 1 - i);
        sum = sum + k;
    }
    return sum;
}

void output(int tab[], int rozmiar){
    int i;
    for(i = 0; i < rozmiar; i++){
        printf("%d ", tab[i]);
    }
}
