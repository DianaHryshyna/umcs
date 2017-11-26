#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isElementlnArray(int current, int m[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(m[i] == current){
                return true;
        }
    }
    return false;
}

void output(int m[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", m[i]);
    }
}

void wyswietli(int m[]){
    int i;
    int current;
    for(i = 0; i < 10; i++){
        scanf("%d", &current);
        if(isElementlnArray(current, m, i) == false){
               m[i] = current;
        }
        else{
            output(m, i);
            printf("Enter other: ");
            i--;
        }
    }
}

int main()
{
    int m[10];
    wyswietli(m);
    return 0;
}






