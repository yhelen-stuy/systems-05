#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringy.h"

int main() {
    char cpyorig[] = "hello there";
    char cpy1[100];
    char cpy2[100];
    printf("===Testing sterncpy===\n");
    printf("Original strings\n");
    printf("cpyorig: %s\n", cpyorig);
    printf("cpy1: %s\n", cpy1);
    printf("cpy2: %s\n", cpy2);
    sterncpy(cpy1, cpyorig, sizeof(cpy1) - 1);
    strncpy(cpy2, cpyorig, sizeof(cpy2) - 1);
    printf("===after sterncpy s into cpy1===\n");
    printf("cpy1: %s\n", cpy1);
    printf("===after strncpy s into cpy2===\n");
    printf("cpy2: %s\n", cpy2);

    char cat1[] = " good person";
    char cat2[100] = "hello there";
    char cat3[100] = "hello there";
    printf("===Testing sterncat===\n");
    printf("Original strings\n");
    printf("cat1: %s\n", cat1);
    printf("cat2: %s\n", cat2);
    printf("cat3: %s\n", cat3);
    sterncat(cat2, cat1, sizeof(cat2) - strlen(cat1));
    strncat(cat3, cat1, sizeof(cat3) - strlen(cat1));
    printf("===after sterncat cat1 onto cat2===\n");
    printf("cat2: %s\n", cat2);
    printf("===after strncat cat1 onto cat3===\n");
    printf("cat3: %s\n", cat3);

}
