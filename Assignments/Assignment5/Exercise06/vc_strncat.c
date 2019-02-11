/**
* File              : vc_strncat.c
* Author            : Kazuya, Hao-tse
* Date              : Friday Feb 08 2019
*/
#include "pch.h"
#include <stdio.h>


char *vc_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int y = 0;

	if (src == NULL)
	{
		return NULL;
	}

	for (y = 0; dest[y] != '\0'; y++);

	for (i; src[i] != '\0' && n > 0; i++, n --)
	{
		dest[i + y] = src[i];
	}

	dest[i + y] = '\0';

	return dest;

}
