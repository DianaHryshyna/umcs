#include <stdio.h>
#include <stdlib.h>

struct Trojkat{
    int a;
    int b;
    int c;
};

int obwod(struct Trojkat parametry){
    return parametry.a + parametry.b + parametry.c;
}

int main()
{
    struct Trojkat parametry = {5, 6, 7};
    printf("%d", obwod(parametry));
    return 0;
}
