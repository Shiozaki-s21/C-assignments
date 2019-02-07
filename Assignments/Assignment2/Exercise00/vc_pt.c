/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-06 16:03:51
 */

#include <stdio.h>

void vc_pt(int *n)
{
    printf("==================\n%1$s\n==================\n", __func__);
    *n = 77;
}