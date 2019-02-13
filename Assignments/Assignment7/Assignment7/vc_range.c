/*
 * @Author: Kazuya Takahashi Juan 
 * @Date: 2019-02-12 14:56:04 
 * @Last Modified by:   Kazuya Takahashi Juan 
 * @Last Modified time: 2019-02-12 14:56:04 
 */

#include<stdio.h>
int *vc_range(int min, int max){

    if(min >= max){
        return 0;
    }
    
    int size = max - min;
    int *arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        return 0;
    }
    
    for(int i = min; i < max; i++){
        arr[i-min] = i;
    }
    
    return arr;
}