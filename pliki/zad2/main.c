#include <stdio.h>
#include <stdlib.h>

int main() {
    /*char napis[] = "Lublu";
    FILE *fp;
    fp=fopen("file.txt","w");
    fprintf(fp, napis);*/

    FILE *fp;
    fp=fopen("file.txt","r");
    if(fp == NULL)
        return 1;
    char x;
    fscanf(fp,"%c",&x);
    fclose(fp);
    printf("%c",x);
    return 0;

}
