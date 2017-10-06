#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringy.h"

int main() {
    char cpyorig[] = "hello there";
    char cpy1[100];
    char cpy2[100];
    printf("\n****Testing sterrcpy****\n");
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
    printf("\n****Testing sterncat****\n");
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

    printf("\n****Testing sterrcomp****\n");
    
    char hello[] = "HfLLO";
    char hello2[] = "HELlo";

    char ayy[] = "";
    char ayt[] = "1";
    char att[] = "12";


    printf("sterrcmping %s and %s: %d\n", hello, hello2, sterrcmp(hello, hello2));
    printf("strcmping %s and %s: %d\n", hello, hello2, strcmp(hello, hello2));

    printf("sterrrcmping  %s and %s: %d\n", hello, hello, sterrcmp(hello, hello));
    printf("strcmping  %s and %s: %d\n", hello, hello, strcmp(hello, hello));

    printf("sterrrcmping  %s and %s: %d\n", ayt, ayy, sterrcmp(hello, hello));
    printf("strcmping  %s and %s: %d\n", ayt, ayy, strcmp(hello, hello));

    printf("sterrrcmping  %s and %s: %d\n", ayt, ayy, sterrcmp(ayt, ayy));
    printf("strcmping  %s and %s: %d\n", ayt, ayy, strcmp(ayt, ayy));

    printf("sterrrcmping  %s and %s: %d\n", ayt, att, sterrcmp(ayt, att));
    printf("strcmping  %s and %s: %d\n", ayt, att, strcmp(ayt, att));

    printf("\n****Testing sterrchr****\n");
    printf("sterrchr finding \'%c\' in %s: %p\n", 'H', hello, sterrchr(hello, 'H'));
    printf("strchr finding \'%c\' in %s: %p\n", 'H', hello, strchr(hello, 'H'));

    printf("sterrchr finding \'%c\' in %s: %p\n", 'o', hello, sterrchr(hello, 'o'));
    printf("strchr finding \'%c\' in %s: %p\n", 'o', hello, strchr(hello, 'o'));

    printf("sterrchr finding \'%c\' in %s: %p\n", 'L', hello, sterrchr(hello, 'L'));
    printf("strchr finding \'%c\' in %s: %p\n", 'L', hello, strchr(hello, 'L'));

    printf("\n****Testing sterrlen****\n");
    printf("sterrlen of %s: %d\n", ayy, sterrlen(ayy));
    printf("strlen of %s: %d\n", ayy, strlen(ayy));
    
    printf("sterrlen of %s: %d\n", hello, sterrlen(hello));
    printf("strlen of %s: %d\n", hello, strlen(hello));
}
