#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int* tab1 = malloc(256* sizeof(int*));
    char* tab = malloc(200* sizeof(char*));
    fgets(tab, 200, stdin);

    for(i = 0; i < 256; i++){
        *(tab1 + i) = 0;
    }
    for(i = 0; i < strlen(tab); i++){
        ++(*( tab1 + (int)(*(tab + i)) ));
    }
    for(i = 0; i < 256; i++){
        if (*(tab1 + i) > 1) {
          printf("%c ", (char)(i));
        }
    }
    return 0;
}
