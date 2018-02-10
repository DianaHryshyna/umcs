#include <stdio.h>
#include <stdlib.h>
void f(int tab1[], int tab2[], int tab3[], int n){
    int k;
    int i;
    for(i = 0; i < 2*n; i++){
    tab1[i] = (i % 2 == 0) ? tab2[i/2] : tab3[i/2];
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int tab1[2*n];
    int tab2[n];
    int tab3[n];
    int i;

    printf("Enter tab1: ");
    for(i = 0; i < 2*n; i++){
        scanf("%d", &tab1[i]);
    }
    printf("Enter tab2: ");
    for(i = 0; i < n; i++){
        scanf("%d", &tab2[i]);
    }
    printf("Enter tab3: ");
    for(i = 0; i < n; i++){
        scanf("%d", &tab3[i]);
    }

    f(tab1, tab2, tab3, n);
    for(i = 0; i < 2 * n; i++)
    {
        printf("%d ", tab1[i]);
    }
    return 0;
}
