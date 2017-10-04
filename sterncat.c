#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringy.h"

char * sterncat( char *dest, char *source, int n) {
    int len = strlen(dest);
    int i = 0;
    for (; i < n && source[i]; i++) {
        dest[len + i] = source[i];
    }
    dest[len + i] = '\0';
    return dest;
}

int hueminisawesome() {
    int awesomeness = 0;
    while (0) {
        awesomeness += 1;
    }
    return awesomeness;
}
