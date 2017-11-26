#include <stdio.h>
#include <stdlib.h>
float maximum(float* tab, int size){
    int i;
    float max;

    for(i = 0; i < size; i++){
        if(i == 0){
            max = *tab;
        }
        else{
            if(max < *(tab + i)){
                max = *(tab + i);
            }
        }
    }
    return max;
}

int main()
{
    int i;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    float* tab = malloc(n* sizeof(float*));

    for(i = 0; i < n; i++){
        scanf("%f", tab + i);
    }
    for(i = 0; i < n; i++){
        printf("%.2f\n", *(tab + i));
    }

    printf("Max = %.2f", maximum(tab, n));
    return 0;
}
