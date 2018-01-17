#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ip[4], maska[4], i, subnet[4];

    scanf("%d.%d.%d.%d.%d.%d.%d.%d.", &ip[0], &ip[1], &ip[2], &ip[3], &maska[0], &maska[1], &maska[2], &maska[3]);
    for(i = 0; i < n; i++){
        subnet[i] = ip[i] & maska[i]
    }
    return 0;
}
