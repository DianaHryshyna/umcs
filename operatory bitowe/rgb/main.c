#include <stdio.h>
#include <stdlib.h>

int main() {
    int color=0x123456;
    unsigned char b=color & 0xFF;
    unsigned char g=(color & 0xFF00) >> 8;
    unsigned char r=(color & 0xFF0000) >> 16;

    printf("%u %u %u", r, g, b);

    color=0;
    color|=b;
    color|=g << 8;
    color|=r << 16;

    printf("\n%x",color);
    return 0;
}
