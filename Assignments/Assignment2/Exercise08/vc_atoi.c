/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-06 23:32:58
 */

#include <stdio.h>
int vc_atoi(char *str)
{
    printf("==================\n%1$s\n==================\n", __func__);
    char *tmpChar;
    int counter = 0;
    int result = 0;
    int weight = 1;

    // take the number from char *
    for (; 48 <= *str && *str <= 58; *str++)
    {
        *tmpChar = *str - 48;
        tmpChar++;
        counter++;
    }

    tmpChar--;

    // reverse here
    for (int i = 0; i < counter; i++)
    {
        result += *tmpChar * weight;
        weight *= 10;
        tmpChar--;
    }

    return result;
}