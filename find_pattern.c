#include <stdio.h>

int find_pattern(char* line, char* pattern){

    int i = 0;
    int j = 0;

    while(*(line+i)!='\n'){
        while(*(line+i+j)==*(pattern+j)){
            ++j;
        }
        if(*(pattern+j)=='\0'){
            return 1;
        }
        j=0;
        ++i;
    }

    return 0;
}


