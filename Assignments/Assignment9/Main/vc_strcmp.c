/*
 * @Author: Kazuya Takahashi Hoang Thong
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 14:50:54
 */

#include <stdio.h>
int vc_strcmp(char *s1, char *s2)
{
    const int same = 0;
    while (*s1 != '\0' || *s2 != '\0')
    {
        if (*s1 > *s2)
        {
            return 1;
        }
        else if (*s1 < *s2)
        {
            return -1;
        }

        if (*s1 == '\0')
            return -1;
        if (*s2 == '\0')
            return 1;

        s1++;
        s2++;
    }

    return same;
}