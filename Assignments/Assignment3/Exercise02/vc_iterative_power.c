/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 14:50:13
 */

#include <stdio.h>

int vc_iterative_power(int n, int power)
{
    int total = 1;
    // error
    if (power == 0)
    {
        return 1;
    }
    else if (power < 0)
    {
        return 0;
    }

    for (; 0 < power; power--)
    {
        total = total * n;
        if (total == NULL)
            return 0;
    }

    return total;
}