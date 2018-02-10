#include <stdio.h>
#include <stdlib.h>

int min(const void* a, const void* b) {
    int av = *(int*)a;
    int bv = *(int*)b;
    if(av < bv) return -1;
    else if(av == bv) return 0;
    else return 1;
}

int max(const void *a, const void *b) {
    int av=*(int *)a;
    int bv=*(int *)b;
    if(av > bv) return -1;
    else if(av == bv) return 0;
    else return 1;
}

int main() {
    int arr[4]={5,20,3,8};
    qsort(arr,4,sizeof(int),min);
    for(int i=0; i<4; i++)
        printf("%d ",arr[i]);
    printf("\n");
    qsort(arr,4,sizeof(int),max);
    for(int i=0; i<4; i++)
        printf("%d ",arr[i]);
    return 0;
}
