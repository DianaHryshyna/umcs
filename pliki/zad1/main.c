#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp=fopen("file.txt","w");
    fprintf(fp,"Ala ma kota");
    fclose(fp);
    return 0;
}
/*int main(int argc, char** argv){
    if(argc < 2){
        printf("Blad");
        exit(2);
    }

    FILE *f;
    f = fopen("Plik.txt", "r");
    if(!f){
        perror("Problem z plikiem");
        exit(1);
    }

    int sum = 0;
    char c;
    while((c = fgetc(f)) != EOF){
        printf("%c", c);
        sum++;
    }
    printf("Hello world!\n");
    return 0;
}*/
