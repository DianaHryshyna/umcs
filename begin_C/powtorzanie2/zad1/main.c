#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void set(char arr[], int i, bool v){
    char temp = arr[i/8];
    char pos = 1 << (i%8);
    if(v){
        temp = temp | pos;
    }
    else{
        pos = ~pos;
        temp = temp & pos;
    }
    arr[i/8] = temp;
}

bool get(char arr[], int i){
    char pos = 1 << (i%8);
    return arr[i/8] & pos;
}

int main()
{
    int i;
    char arr[10]={};
    set(arr, 10, true);
    set(arr, 11, true);
    for(i=0; i<80; i++)
        printf("%c ", get(arr,i) ? '+' : '-');
    puts("");
    set(arr, 10, false);
    for(i=0; i<80; i++)
        printf("%c ", get(arr,i) ? '+' : '-');
    return 0;
}
