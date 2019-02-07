/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-06 18:19:35
 */

#include <stdio.h>
void vc_putstr(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }

    printf("\n");
}