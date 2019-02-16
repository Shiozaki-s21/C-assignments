#include <stdio.h>
#include <stdlib.h>

// Ex03
int isCapital(char *target) {
    if(65 <= *target && *target <= 90) {
        return 1;
    } else {
        return 0;
    }
}

int vc_any(char **tab, int(*f)(char*)) {
    // if tab dosen't have a element, return 0
    // exexute function
    for(; tab != '\0'; tab++) {
        char *s = *tab;
       if(f(s) == 1) return 1;
    }
    return 0;
}

int ex03(int argc, char const *argv[])
{
    /* code */
    char *strArr[] = {"hello", "World", "goodby"};
    
    // create function pointer
    int(*f)(char *); 
    f = &isCapital;

    // execute funtion
    printf("result is %d\n", vc_any(strArr, f));
    return 0;
}