#include <stdio.h>
#include <stdlib.h>

void funkcja(double* a){
    free(a);
    a = NULL;
}

int main()
{
    double *a = malloc(sizeof(double*));
    *a = 60;

    funkcja(a);
    printf("%.lf\n", a);

    if(a == NULL){
        printf("A jest nullem");
    }
    else{
        printf("A nie jest nullem");
    }

    return 0;
}
