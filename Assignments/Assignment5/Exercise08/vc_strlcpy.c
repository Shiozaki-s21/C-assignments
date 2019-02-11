/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-08 16:37:22 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-08 18:40:02
 */

#include <stdio.h>
unsigned int *vc_strlcpy(char *dest, char *src, unsigned int size)
{
    int i = 0;
    for (; (i < size) && src[i]; i++)
    {
        dest[i] = src[i];
    }

    if(i <= size){
        dest[i] = '\0';
        while(src[i]) {
            i++;
        }
    }
    
    return i;
  }