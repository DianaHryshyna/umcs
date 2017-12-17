#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Zmodyfikowac_SMS(char* napis, int rozmiar){
    int i, k;
    for(i = 0; i < rozmiar; i++){
        if(*(napis + i) == ' '){
            if((*(napis + i + 1) >= 'a') && (*(napis + i + 1) <= 'z')){
                *(napis + i + 1) = *(napis + i + 1) - ('a' - 'A');
            }
        }
    }
    for(i = 0; i < rozmiar; i++){
        if(*(napis + i) == ' '){
            for(k = i; k < rozmiar; k++){
                *(napis + k) = *(napis + k + 1);
            }
        }
    }
}
int main()
{
    char* napis = malloc(200* sizeof(char*));
    fgets(napis, 200, stdin);
    int length = strlen(napis);
    Zmodyfikowac_SMS(napis, length);
    fputs(napis, stdout);
    return 0;
}
