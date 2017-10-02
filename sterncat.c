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

int main() {
    char s1[] = " good person";
    char s2[100] = "hello there";
    char s3[100] = "hello there";
    printf("===before all cat===\n");
    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);
    sterncat(s2, s1, sizeof(s2) - strlen(s1));
    printf("===after sterncat s1 onto s2===\n");
    printf("s2: %s\n", s2);
    printf("===after strncat s1 onto s3===\n");
    strncat(s3, s1, sizeof(s3) - strlen(s1));
    printf("s3: %s\n", s3);
}
