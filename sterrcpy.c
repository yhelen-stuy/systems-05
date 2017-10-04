#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringy.h"

char * sterrcpy( char *dest, char *source) {
    int i = 0;
    for (; i < strlen(source); i++) {
        dest[i] = source[i];
    }
    return dest;
}
