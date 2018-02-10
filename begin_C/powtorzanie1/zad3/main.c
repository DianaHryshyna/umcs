#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Zmienia_Napisy(char* napis1, char* napis2, char* napis3){
    int i;
    int length1 = strlen(napis1) - 1;
    int length2 = strlen(napis2) - 1;
    int length3 = (length1 < length2) ? 2*length1 : 2*length2;

    for(i = 0; i < length3; i++) {
      *(napis3 + i) = (i % 2 == 0) ? *(napis1 + i/2) : *(napis2 + i/2);
    }
}

int main()
{
    char* napis1 = malloc(200* sizeof(char*));
    char* napis2 = malloc(200* sizeof(char*));
    char* napis3 = malloc(200* sizeof(char*));

    fgets(napis1, 200, stdin);
    fgets(napis2, 200, stdin);

    int i;
    Zmienia_Napisy(napis1, napis2, napis3);
    for(i = 0; i < strlen(napis3); i++){
        printf("%c", *(napis3 + i));
    }
    printf("/");
    return 0;
}
