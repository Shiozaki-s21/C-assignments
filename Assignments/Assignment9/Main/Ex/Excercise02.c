#include <stdio.h>
#include <stdlib.h>

// Ex02
int plusOne(int num) {
    return num += 1;
}

int *vc_map(int *tab, int length, int(*f)(int)) {
    int *result = (int *)malloc(length * sizeof(int));
    
    for(int i = 0; i < length; i++, tab++) {
        *(result + i) = f(*tab);
    }
    return result;
}

int ex02(int argc, char const *argv[])
{
    // make array
    int tab[10];
    for(int i = 1; i <= 10; i++) {
        tab[i - 1] = i;
    }

    // create function pointer 
    int (*PlusOne)(int);
    PlusOne = &plusOne;

    // excute funtion 
    int *tab2 = vc_map(tab, 5, PlusOne);

    // show result
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", tab2[i]);;
    }

    return 0;
}