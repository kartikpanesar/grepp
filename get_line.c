#include <stdio.h>

int get_line(char input[]){
    char c ;
    int i = 0;

    while((c=getchar())!='\n' && c!=EOF){
        input[i++] = c;
    }

    if(c==EOF){
        return 0;
    }

    input[i] = '\n';

    return 1;
}

void print_line(char line[]){
    while(*line != '\n')
        putchar(*line++);
    printf("\n");
}
