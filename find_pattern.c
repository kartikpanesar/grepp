#include <stdio.h>

int find_pattern(char* line, char* pattern, int ins){

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

int is2_alpha(char c, char d){
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        if((d>='a' && d<='z')||(d>='A' && d<='Z')){
            return 1;
        }
        return 0;
    }
    return 0;
}


int ins_equal(char a, char b){
    if(a==b){
        return 1;
    }
    else if(is2_alpha(a,b)){
        if(a-32==b || a+32==b){
            return 1;
        }
        return 0;
    }
    return 0;
}

int find_pattern_ins(char* line, char* pattern){
    int i=0;
    int j=0;

    while(line[i]!='\n'){
        while(ins_equal(line[i+j], pattern[j])){
            ++j;
        }
        if(pattern[j]=='\0'){
            return 1;
        }
        j=0;
        ++i;
    }
    return 0;
}


