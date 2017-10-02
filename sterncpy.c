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

int main() {
    char s[] = "hello there";
    char s1[100];
    char s2[100];
    printf("===before all cpy===\n");
    printf("s: %s\n", s);
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    sterncpy(s1, s, sizeof(s1) - 1);
    printf("===after sterncpy s into s1===\n");
    printf("s1: %s\n", s1);
    printf("===after strncpy s into s2===\n");
    strncpy(s2, s, sizeof(s2) - 1);
    printf("s2: %s\n", s2);
}
