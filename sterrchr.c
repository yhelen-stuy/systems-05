#include <stdio.h>
#include <stdlib.h>
char * sterrchr(char * arr, char c) {
    while (*arr++) {
        if (*arr == c) return arr;
    }
    return 0;
}

