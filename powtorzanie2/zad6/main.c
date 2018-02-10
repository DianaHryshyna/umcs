#include <stdio.h>
#include <stdlib.h>
/*
ќпределите структуру точки на плоскости в декартовой системе координат и
структуру отрезка, состо€щего из двух точечных структур. Ќапишите три
функции, которые возвращают длину отрезка в следующих показател€х:
евклидовой, городской и речной. Ќапишите функцию, котора€ примет массив
точек, его размер и указатель на одну из функций, описанных выше. ‘ункци€
должна возвращать самый короткий отрезок между точками из указанного массива.
*/

typedef struct Point{
   int x;
   int y;
}Point;

typedef struct intercept{
    Point p1;
    Point p2;
}intercept;

float euklid(Point* p1, Point* p2){
    return sqrt(pow(p2->y - p1->y, 2) + pow(p2->x - p1->x, 2));
}

float city(Point* p1, Point* p2){
    return abs(p2->y - p1->y) + abs(p2->x - p1->x);
}

float river(Point* p1, Point* p2){
    return abs(p1->y) + abs(p2->x - p1->x) + abs(p2->y);
}

float minIntercept(Point* arr, int n, float (*metric)(struct Point*, struct Point*)){
int min = 0;
int i, j;
for (i = 0; i < n - 1; ++i) {
  for (j = i + 1; j < n; ++j) {
       if (i == 0) {
         min = metric(&arr[i], &arr[j]);
       }
       else {
        if(metric(&arr[i], &arr[j]) < min){
            min = metric(&arr[i], &arr[j]);
       }
       }
  }

}
return min;
}

int main()
{
    int i;
    Point arr[3];
    for(i = 0; i < 3; i++){
        scanf("%d", &arr[i].x);
        scanf("%d", &arr[i].y);
        printf("\n");
    }
    float (*fun)(struct Point*, struct Point*);
    fun = river;
    printf("%f", minIntercept(&arr, 3, river));
    return 0;
}
