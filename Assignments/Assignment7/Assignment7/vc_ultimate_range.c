/**
 * File              : vc_ultimate_range.c
 * Author            : Juan and Kazuya
 * Date              : Tue 12 Feb 2019
 */
#include <stdlib.h>



int vc_ultimate_range(int **range, int min, int max){

    if(min >= max){
        *range = NULL;
        return 0;
    }
    int size = max - min;
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        return 0;
    }
    for(int i = min; i < max; i++){
        arr[i-min] = i;
//        (*range)[0] = i;
    }
    *range = arr;
    return size;

}