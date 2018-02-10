#include <stdio.h>
#include <stdlib.h>
#include <ctupe.h>

int main(){
   FILE *f;
   f = fopen("file.txt", "r");
   if(!f){
       perror("Problem z plikiem");
		exit(1);
   }

    char wiersz[5][512];

    FILE *fw;
	fw = fopen("pliczek-do-zapisu.txt", "w");
	if(!fw)
	{
		perror("Problem z plikiem");
		exit(1);
	}

	int i =0;
	int j = 0;
	int sum[5];
	while( fgets( wiersz[i], 512, f ) != NULL )
	{
       j = 0;
       while(!isdigit(wiersz[i][j])){
            j++;
       }
       while(isdigit(wiersz[i][j])){
            if(isdigit(wiersz[i][j]) && !isdigit(wiersz[i][j-1])){

            }
       }



       for(j = 0; wiersz[i][j]; j++){
            if(isdigit(wiersz[i][j]) && !isdigit(wiersz[i][j+1])){
                sum[i] += atoi(wiersz[i][j]);
            }
            else

       }
	   ++i;
	}
}

//https://github.com/SinyTim/Study/blob/master/BSU.FAMCS/1semester/6week/6week/task2_1.cpp
