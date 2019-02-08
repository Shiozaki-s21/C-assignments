/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 14:50:13
 */

#include <stdio.h>
#include <stdbool.h>
char *vc_strstr(char *str, char *to_find)
{
    // while for str
    while (*str != '\0')
    {
        // if to find same character between src and to_find
        if (*str == *to_find)
        {
            // while for to_find
            int counter = 0;
            bool flag = true;
            while (*to_find != '\0')
            {
                //if to find different character between src and to_find
                if (*str != *to_find)
                {
                    // back to while for str
                    flag = false;
                }
                counter++;
                to_find++;
                str++;
            }
            // flag = true
            // back to head of to_find with src
            while (0 < counter)
            {
                to_find--;
                str--;
                counter--;
            }

            if (flag)
                return str;
        }
        // count up with src and to_find
        str++;
    }
    return '\0';
}