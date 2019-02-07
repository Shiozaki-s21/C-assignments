/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-06 23:32:54
 */

#include <stdio.h>
char *vc_strrev(char *str)
{
    printf("==================\n%1$s\n==================\n", __func__);
    char *reverse;
    int counter = 0;
    while (*str != '\0')
    {
        *str++;
        counter++;
    }

    *str--;

    for (int i = 0; i < counter; i++)
    {
        *reverse = *str;
        reverse++;
        str--;
    }

    for (int i = 0; i < counter; i++)
    {
        reverse--;
    }

    return reverse;
}