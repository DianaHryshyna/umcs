#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>

typedef struct Point{
    float x;
    float y;
    void (*move)(struct Point*, float, float);
} Point;

void movePoint(Point* p, float tx, float ty) {
    p->x += tx; // (*p).x += tx;
    p->y += ty;
}

int main() {

    Point p={3, 2, movePoint};
    //p.move=movePoint;
    p.move(&p,10,20);
    printf("%.0f %.0f", p.x, p.y);
    return 0;
}



/*void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

int c=1, d=2;
swap(c,d);*/
