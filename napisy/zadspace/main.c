#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int dlugosc_napisu(char napis[]);
int CountWords(char napis[], int rozmiar);

int main()
{
    int i;
    char napis[200] = "   Ala ma  kota ";
    printf("\nILosc slow = %d", CountWords(napis, i));
    return 0;
}

int dlugosc_napisu(char napis[]){
    int i = 0;
    for( ; napis[i]; i++);
    return i;
}

int CountWords(char napis[], int rozmiar){
    int i;
    int sum = 0;
    int length = dlugosc_napisu(napis);

    for(i = 0; i < length; i++){
        if(napis[i] != ' '){
            while(napis[i] != ' '){
                i++;
            }
            --i;
            ++sum;
        }
    }
    return sum;
}
