#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    char b;
    char c;
    char d;
    scanf("%c\n", &a);
    scanf("%c\n", &b);
    scanf("%c\n", &c);
    scanf("%c", &d);
    printf("\n%c %c %c %c", a, b, c, d);
    printf("\n%c %c %c %c", a, c, b, d);
    printf("\n%c %c %c %c", a, b, d, c);
    printf("\n%c %c %c %c", a, c, d, b);
    printf("\n%c %c %c %c", a, d, b, c);
    printf("\n%c %c %c %c", a, d, c, b);
    printf("\n%c %c %c %c", b, a, c, d);
    printf("\n%c %c %c %c", b, a, d, c);
    printf("\n%c %c %c %c", b, c, a, d);
    printf("\n%c %c %c %c", b, c, d, a);
    printf("\n%c %c %c %c", b, d, a, c);
    printf("\n%c %c %c %c", b, d, c, a);
    printf("\n%c %c %c %c", c, b, a, d);
    printf("\n%c %c %c %c", c, b, d, a);
    printf("\n%c %c %c %c", c, a, b, d);
    printf("\n%c %c %c %c", c, a, d, b);
    printf("\n%c %c %c %c", c, d, b, a);
    printf("\n%c %c %c %c", c, d, a, b);
    printf("\n%c %c %c %c", d, a, b, c);
    printf("\n%c %c %c %c", d, a, c, b);
    printf("\n%c %c %c %c", d, b, c, a);
    printf("\n%c %c %c %c", d, b, a, c);
    printf("\n%c %c %c %c", d, c, b, a);
    printf("\n%c %c %c %c", d, c, a, b);
    return 0;
}
