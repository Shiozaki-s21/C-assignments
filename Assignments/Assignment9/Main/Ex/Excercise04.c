#include <stdio.h>
#include <stdlib.h>

// Ex04
int isCapital2(char *target) {
    if(65 <= *target && *target <= 90) {
        return 1;
    } else {
        return 0;
    }
}

int vc_count_if(char **tab, int(*f)(char*)) {
    // if tab dosen't have a element, return 0
    // exexute function
    int result = 0;
    int size = sizeof(*tab);
    for(; *tab != '\0'; *tab++) {
       if(f(*tab) == 1)  result++;
    }
    return result;
}



int ex04(int argc, char const *argv[])
{
    /* code */
    char *strArr[] = {"hello", "World", "Goodby", '\0'};
    
    // add null char
    // create function pointer
    int(*f)(char *); 
    f = &isCapital2;

    // execute funtion
    printf("result is %d\n", vc_count_if(strArr, f));
    return 0;
}