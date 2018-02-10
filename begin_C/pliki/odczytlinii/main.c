#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp=fopen("file.txt","r");
    char *line=NULL;
    size_t size;
    while(1) {
        size = getline(&line, &size, fp);
        if(size==EOF)
            break;
        printf("%s",line);
    }
    free(line);
    fclose(fp);
    return 0;
}
