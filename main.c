#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringy.h"

int main() {
    char cpyorig[] = "hello there";
    char cpy1[100];
    char cpy2[100];
    printf("****Testing sterrcpy****\n");
    printf("ORIGINAL STRINGS\n");
    printf("cpyorig: %s\n", cpyorig);
    printf("cpy1: %s\n", cpy1);
    printf("cpy2: %s\n", cpy2);
    sterrcpy(cpy1, cpyorig);
    strcpy(cpy2, cpyorig);
    printf("after sterrcpy cpyorig into cpy1\n");
    printf("\tcpy1: %s\n", cpy1);
    printf("after strcpy cpyorig into cpy2\n");
    printf("\tcpy2: %s\n", cpy2);

    char cat1[] = " good person";
    char cat2[100] = "hello there";
    char cat3[100] = "hello there";
    printf("****Testing sterncat****\n");
    printf("ORIGINAL STRINGS\n");
    printf("cat1: %s\n", cat1);
    printf("cat2: %s\n", cat2);
    printf("cat3: %s\n", cat3);
    sterncat(cat2, cat1, sizeof(cat2) - strlen(cat1));
    strncat(cat3, cat1, sizeof(cat3) - strlen(cat1));
    printf("after sterncat cat1 onto cat2\n");
    printf("\tcat2: %s\n", cat2);
    printf("after strncat cat1 onto cat3\n");
    printf("\tcat3: %s\n", cat3);

    printf("****Testing sterrcomp****\n");
    
    char hello[] = "HfLLO";
    char hello2[] = "HELlo";

    char ayy[] = "";
    char ayt[] = "1";


    printf("Comparing %s and %s: %d\n", hello, hello2, sterrcmp(hello, hello2));

}
