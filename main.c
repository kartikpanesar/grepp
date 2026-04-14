#include <stdio.h>
#define MAXLINE 1000
#include "functions.h"

int main(int argc , char* argv[]){
    char line[MAXLINE];
    int n = 0;  // flag for n(line numbers option);
    int x = 0; // flag for x(inversion) option , which output all lines
               // except the pattern.
    int ins = 0; // flag for case insensitive.
    int count = 0;


    if(argc < 2){
        printf("Example Usage: grepp -options(optional) pattern\n");
    }

    for(int i=1; i<=(argc-2); ++i){
        options(argv[i], &n, &x, &ins);
    }


    while(get_line(line)){
        int matched = 0;
        if(ins==1){
            matched = find_pattern_ins(line, argv[argc-1]);
        }
        else{
            matched = find_pattern(line, argv[argc-1]);
        }

        ++count;
        if(n && x){
            if(!matched){
                printf("%d. ", count);
                print_line(line);
            }
        }

        else if(n){
            if(matched){
                printf("%d. ", count);
                print_line(line);
            }
        }

        else if(x){
            if(!matched){
                print_line(line);
            }
        }

        else{
            if(matched){
                print_line(line);
            }
        }
    }

    return 0;
}


