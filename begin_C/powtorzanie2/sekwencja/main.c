#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct parametry{
    char key[2];
    int k;
} Parametry;

Parametry* Number(char* example, char* str){
    int i = 0;

    int size = strlen(example) - 1;
    Parametry* sum = (Parametry*)malloc(size * sizeof(Parametry));////////
    /*for(i = 0; i < size; i++){
        Parametry[i].k = 0;
    }*/

    for(i = 0; i < size; ++i) {
        sum[i].key[0] = example[i];
        sum[i].key[1] = example[i+1];
        sum[i].k = funkcja(sum[i].key, str);
    }
    return sum;
}

int funkcja(char* key, char* str){
    int i = 0;
    int sum = 0;
    for(i = 0; i < strlen(str) - 1; i++) {
        if(key[0] == str[i] && key[1] == str[i+1]) {
            ++sum;
        }
    }
    return sum;
}

int main()
{
    int i;
    char* example = "1001001";
    char* str = "1100110";
    Parametry* result = Number(example, str);
    for(i = 0; i < strlen(example) - 1; ++i){
        printf("%c%c: %d", result[i].key[0], result[i].key[1], result[i].k);
        printf("\n");
    }
    return 0;
}
