#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
/*
�������� �������, ������� ����� �������������� � �������� ����������� � �������
qsort, ������� �������� ������������� ������, ��������������� �� ����������
������� � ���. ���������� ������� ����� ����� �������.
*/

bool isVowel(char ch){
    char* key = "aeiou";
    if(strpbrk(ch, key) == NULL){
        return false;
    }
    else
        return true;
    //return (strpbrk(str, "aeuoi"));
}

int Count(char* str){
    int i;
    int count = 0;
    for(i = 0; str[i]; i++){
        if(isVowel(str[i]) == true){
            count++;
        }
    }
    return count;
}

int max(const void* a, const void* b) {
    char* s1 = *(char**)a;
    char* s2 = *(char**)b;
    if(Count(s1) > Count(s2)){
        return 1;
    }
    else if(Count(s1) < Count(s2)){
        return -1;
    }
    else
        return 0;
}

int main()
{
    int i, j;
    char** str = {"Alamaota", "Timur", "Diana"};
    qsort(str, 3, sizeof(char*), max);
    for(i = 0; str[i]; i++){
       for(j = 0; str[i][j]; j++){
           printf("%c", str[i][j]);
           printf("\n");
       }
    }
    return 0;
}

