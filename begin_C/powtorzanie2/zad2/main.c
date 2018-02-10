#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef enum {LOWERCASE, UPPERCASE, CAPITALIZED} type;

bool isBig(char ch){
    if(ch > 96 && ch < 126){
        return false;
    }
    else{
        return true;
    }
}

bool TypNapisu(type c, char* str){
    int i;
    switch(c){
        case LOWERCASE:{
            for(i = 0; str[i]; i++){
               if(isBig(str[i]) == true){
                    return false;
               }
            }
            return true;
        }
        case UPPERCASE:{
            for(i = 0; str[i]; i++){
                if(isBig(str[i]) == false){
                    return false;
               }
            }
            return true;
        }
        case CAPITALIZED:{
            for(i = 0; str[i]; i++){
                if(i == 0){
                     if(isBig(str[i]) == false){
                          return false;
                     }
                }
                else
                if(isBig(str[i]) == true){
                    return false;
                }
            }
            return true;

        }
    }
}

int main()
{
    char str[] = "occccccccccccchennuuu";
    printf("%d", TypNapisu(LOWERCASE, str));
    return 0;
}
