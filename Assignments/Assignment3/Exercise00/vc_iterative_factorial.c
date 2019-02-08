/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-07 14:45:58 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 15:36:47
 */

#include <stdio.h>

int vc_iterative_factorial(int n)
{
    printf("==================\n%1$s\n==================\n", __func__);

    if (n == 0)
    {
        return 1;
    }

    int tmp = 1;

    for (; 1 < n; n--)
    {
        tmp = tmp * n;
        if (tmp == NULL || tmp < 0)
        {
            return 0;
        }
    }

    return tmp;
}