#include <stdio.h>
#include <stdlib.h>

char* f(){
    int x = 56;
    int i = 0;
    char* tab = malloc(9 * sizeof(*tab));
    while(x > 0){
            if(x%16 < 10){
                itoa(x % 16, &tab[i], 10);
            } else {
                switch(x%16){
                    case 10: tab[i] = 'A';
                    break;
                    case 11: tab[i] = 'B';
                    break;
                    case 12: tab[i] = 'C';
                    break;
                    case 13: tab[i] = 'D';
                    break;
                    case 14: tab[i] = 'E';
                    break;
                    case 15: tab[i] = 'F';
                    break;
                }
            }
        ++i;
        x = x/16;
    }
    tab[i] = '\0';
    return tab;
}

void exchange(char* tab, int size){
    char temp;
    int i = 0;
    for(i = 0; i < size/2; i++) {
      temp = tab[i];
      tab[i] = tab[size - 1 - i];
      tab[size - 1 - i] = temp;
    }
}

int main()
{
    char* result = f();
    int i = 0;
    exchange(result, strlen(result));
    for (i = 0; result[i]; ++i) {
      printf("%c", result[i]);
    }
    return 0;
}
