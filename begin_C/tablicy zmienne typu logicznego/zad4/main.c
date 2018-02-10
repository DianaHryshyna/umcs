#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
bool f(){
    int sum = 0;
    float m[1000];
    int i;
    for(i = 0; i < 5; i++){
        scanf("%f", &m[i]);
    }
    for(i = 1; i < 5; i++){
        sum = sum + m[i]*m[i];
    }

    if(sum > 30){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    bool wynik = f();
    if(wynik == true){
        printf("Jest wieksza od 30");
    }
    else
        printf("Jest mniejsza od 30");
    return 0;
}
