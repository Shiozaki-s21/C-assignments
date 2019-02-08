/*
 * @Author: Kazuya Takahashi Hoang Thong
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 14:50:54
 */

#include <stdio.h>
int vc_recursive_power(int n, int power)
{

    if (power < 0)
    {
        return 0;
    }
    else if (power == 0)
    {
        return 1;
    }

    if (power < 2)
    {
        return n;
    }
    else
    {
        return n * vc_recursive_power(n, power - 1);
    }

    return 0;
}