#include <stdio.h>
#include <stdlib.h>
int max(int m[]){
    int i;
    int rozmiar = 5;
    int maximum = 0;
    for(i = 0; i < rozmiar; i++){
        if(i == 0){
            maximum = m[i];
        }
        else{
            if(m[i] > maximum){
                maximum = m[i];
            }
        }
    }
    return maximum;
}
int main()
{
    int m[10000] = {8, 3, 4, 6, 7};
    printf("Max = %d", max(m));
    return 0;
}
