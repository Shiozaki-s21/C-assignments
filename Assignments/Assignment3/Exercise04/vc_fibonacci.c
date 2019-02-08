/*
 * @Author: Kazuya Takahashi Hoang Thong
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 14:51:20
 */

#include <stdio.h>
int vc_fibonacci(int n)
{
    printf("==================\n%1$s\n==================\n", __func__);
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    int total = 1;
    for (int i = 1; i <= n; i++)
    {
        total *= i;
    }
    if (total == NULL || total < 0)
        return 0;

    return total;
}