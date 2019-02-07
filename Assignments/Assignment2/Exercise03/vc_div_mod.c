/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-06 17:53:37
 */

#include <stdio.h>
void vc_div_mod(int a, int b, int *d, int *mod)
{
    printf("==================\n%1$s\n==================\n", __func__);
    *d = a / b;
    *mod = a % b;
}