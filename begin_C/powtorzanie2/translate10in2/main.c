#include <stdio.h>
#include <stdlib.h>
void f(){
    int x = 15;
    int i = 0;
    while(x > 0){
        printf("%d ", x % 2);
        ++i;
        x = x/2;
    }
}

int main()
{
    f();
    return 0;
}
