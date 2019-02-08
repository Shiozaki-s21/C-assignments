/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:58:30 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 15:48:45
 */
#include <stdio.h>

int vc_recursive_factorial(int n)
{

    //TODO

    int total = 1;

    if (n < 0)
    {
        return 0;
    }

    if (n <= 1)
    {
        return n;
    }
    else
    {
        return n * vc_recursive_factorial(n - 1);
    }
}