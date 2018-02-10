#include <stdio.h>
#include <stdlib.h>

/*int main(int argc, char** argv)
{
    FILE *f;
    f = fopen("file.txt", "w");

    if(!f){
        perror("Problem z plikiem");
        exit(1);
    }


    int i = 0;
    char wiersz[5][512];
    while( fgets( wiersz[i], 512, f ) != NULL )
	{
	    if(i%2==0)
	    	fprintf(f,"%s",wiersz[i]);
	    else
	    	fputs(wiersz[i],f);
	    i++;
	}
    close(f);
    return 0;
}*/


int main(){
    FILE *f;
    f = fopen("file.txt", "w");
    if(!f){
        perror("Problem z plikiem");
        exit(1);
    }
    fprintf(f, "Ala ma kota i psa");

    fclose(f);

    f = fopen("file.txt", "r");


    int i = 0;
    char wiersz[1][512];
    while(fgets(wiersz[i], 512, f) != EOF){
        printf("%s", wiersz[i]);
        ++i;
    }


    fclose(f);
    return 0;
}
