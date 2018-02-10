#include <stdio.h>
#include <stdlib.h>
/*int max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int a = 10;
    int b;
    int *aPointer = &a;
    int *bPointer = &b;
    *aPointer = 822;
    *bPointer = 333;
    printf("Max = %d", max(*aPointer, *bPointer));
    return 0;
}*/
int max(int *a, int *b){
    return *a > *b ? *a : *b;
}
int main()
{
    int a = 10;
    int b = 30;

    //wartosc
    printf("Max = %d", max(&a, &b));
    return 0;
}
