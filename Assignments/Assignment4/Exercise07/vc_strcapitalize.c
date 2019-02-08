/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 15:02:59
 */

#include <stdio.h>
#include <stdbool.h>
char *vc_strcapitalize(char *str)
{

    printf("==================\n%1$s\n==================\n", __func__);
    int counter = 0;
    bool flag = false;
    while (*str != '\0')
    {
        // for head character
        if (counter == 0)
        {
            if (97 <= *str && *str <= 122)
            {
                *str = *str - 32;
                flag = false;
            }
        }

        // to up case
        if (flag)
        {
            if (97 <= *str && *str <= 122)
            {
                *str = *str - 32;
                flag = false;
            }
        }

        // if *str is not a-zA-Z
        if ((*str < 65) || (*str >= 91 && *str <= 96) || (*str >= 123))
        {
            flag = true;
        }

        *str++;
        counter++;
    }

    //go back to head
    while (0 < counter)
    {
        counter--;
        *str--;
    }

    return str;
}