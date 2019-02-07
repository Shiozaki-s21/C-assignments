/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-06 18:20:09
 */

#include <stdio.h>
int vc_strlen(char *str)
{
    int counter = 0;

    while (*str != '\0')
    {
        str++;
        counter++;
    }

    printf("\n");
    return counter;
}
