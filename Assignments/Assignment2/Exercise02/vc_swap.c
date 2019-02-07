/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-06 23:32:41
 */

#include <stdio.h>

void vc_swap(int *a, int *b)
{
    printf("==================\n%1$s\n==================\n", __func__);
    int tmp = *a;
    *a = *b;
    *b = tmp;
}