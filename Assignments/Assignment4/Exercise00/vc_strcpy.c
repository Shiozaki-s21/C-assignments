/*
 * @Author: Kazuya Takahashi Hoang Thong
 * @Date: 2019-02-07 14:45:58 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 15:36:47
 */

#include <stdio.h>

char *vc_strcpy(char *dest, char *src)
{
    printf("==================\n%1$s\n==================\n", __func__);
    int counter = 0;
    while (*dest != '\0')
    {
        counter++;
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        counter++;
    }
    *dest = *src;

    while (0 < counter)
    {
        counter--;
        dest--;
    }

    return dest;
}