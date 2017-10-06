#include <stdio.h>
#include <stdlib.h>
int sterrcmp(char * c1, char * c2) {
    int n;
    //while the char vals are identical and not null, iterate them
    while (*c1 && *c2 && !(n=(*c1++)-(*c2++)));
    return n=*c1-*c2;
}

