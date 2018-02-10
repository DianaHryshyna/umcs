#include <stdio.h>
#include <stdlib.h>
int N = 80;
void f(int m[]){
    int i;
    for(i = 0; i < N; i++){
        m[i] = i;
        if(i % 2 == 0){
            printf("%d", i);
        }
    }
}

int main()
{
    int m[1000];
    f(m[N]);
    return 0;
}
