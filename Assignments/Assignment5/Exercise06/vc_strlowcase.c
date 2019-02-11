/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi, Hoang Thong
 * @Last Modified time: 2019-02-07 15:02:36
 */

#include <stdio.h>

char *vc_strlowcase(char *str)
{
    printf("==================\n%1$s\n==================\n", __func__);
    int counter = 0;
    while (*str != '\0')
    {
        if (65 <= *str && *str <= 90)
        {
            *str = *str + 32;
        }
        str++;
        counter++;
    }

    while (0 < counter)
    {
        counter--;
        str--;
    }

    return str;
}
