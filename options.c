#include <stdio.h>

int options(char* line, int* n, int* x, int* i){
    if(*line++ != '-'){
        printf("Not an Option.\n");
        return 0;
    }
    while(*line!='\0'){
        if(*line=='n'){
            *n = 1;
        }
        else if(*line=='x'){
            *x = 1;
        }
        else if(*line=='i'){
            *i = 1;
        }
        else{
            printf("Option not recognised.\n");
        }
        ++line;
    }

    return 1;
}


