#include <stdio.h>
#include <stdlib.h>

// Ex05
int is_sort(int a, int b) {
    if (a < b) {
        return -1;
    } else {
        return 0;
    }    
}

int vc_is_sort(int *tab, int length, int(*f)(int, int)) {
    for(int i = 0; i < length - 1; i++) {
        if(f(tab[i], tab[i + 1]) != -1) {
            return 0;
        } 
    }
    return 1;
}

int ex05(int argc, char const *argv[])
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,3,2,1};

    int(*f)(int, int);
    f = &is_sort;

    printf("result of arr1 is ... %d\n", vc_is_sort(arr1, 5, f));
    printf("result of arr2 is ... %d\n", vc_is_sort(arr2, 5, f));

    return 0;
}