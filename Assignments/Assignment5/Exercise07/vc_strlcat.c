/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-08 16:20:21 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-08 17:17:33
 */

#include <stdio.h>

unsigned int vc_strlcat(char *dest, char *src, unsigned int size)
{
    int siz = size - 1;
    char *d = dest;
    char *s = src;
    while(*d++) siz--;
    
    int dlen = d - dest - 1;
    
    *d--;
    
    while((*d++ = *s++) && 0 < --siz);
    *d == '\0';

    if(siz < 1) while(*s++); 

    return dlen + s - src - 1;
}
