/*
 * @Author: Kazuya Takahashi Hao Tue 
 * @Date: 2019-02-11 13:30:04 
 * @Last Modified by:   Kazuya Takahashi Hao Tue 
 * @Last Modified time: 2019-02-11 13:30:04 
 */


#include <stdio.h>

int vc_str_is_lowercase(char *str)
{
    while (*str != '\0')
    {
        if (!(97 <= *str && *str <= 122))
        {
            return 0;
        }
        *str++;
    }
    return 1;
}
