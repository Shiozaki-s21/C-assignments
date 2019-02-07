/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-06 23:32:48
 */

#include <stdio.h>
void vc_ultimate_div_mod(int *a, int *b)
{
    printf("==================\n%1$s\n==================\n", __func__);
    int div1 = *a;
    int div = *b;

    int res = div1 / div;
    int mod = div1 % div;

    *a = res;
    *b = mod;
}