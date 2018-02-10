#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deleteStr(char* str, int a, int b) {
    int i;
    for (i = a; i < strlen(str) - (b - a + 1); i++) {
        str[i] = str[i + (b - a + 1)];
    }
    str[strlen(str) - (b - a + 1)] = '\0';
}

void funkcja(char* example, char* str) {
    int i = 0;
    int j = 0;

    for (i = 0; i < strlen(str); i++) {

        if (j == strlen(example)) {
            deleteStr(str, i - strlen(example), i - 1);
            j = 0;
            i -= strlen(example);
        }

        if (str[i] != example[j]) {
            j = 0;
        } else {
            ++j;
        }

    }
}

int main() {
    int i;

    char* example = "qwe";
    char* str0 = "123qwert qwertaddqwe.";
    char* str = malloc((strlen(str0)+ 1)*sizeof(*str));

    for (i = 0; i < strlen(str0); ++i) {
        str[i] = str0[i];
    }
    str[strlen(str0)] = '\0';

    funkcja(example, str);

    for (i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
    }

    return 0;
}
