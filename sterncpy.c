#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringy.h"

char * sterncpy( char *dest, char *source, int n) {
    int i = 0;
    while (i < n && source[i]) {
        dest[i] = source[i];
        i++;
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}
