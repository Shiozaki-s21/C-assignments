/**
* File              : vc_strcat.c
* Author            : Kazuya, Hao-tse
* Date              : Friday Feb 08 2019
*/
#include "pch.h"
#include <stdio.h>


char *vc_strcat(char *dest, char *src)
{

	int i = 0;
	int y = 0;

	if (src == NULL)
	{
		return NULL;
	}

	for (y = 0; dest[y] != '\0'; y++);

	for (i; src[i] != '\0'; i++)
	{
		dest[i + y] = src[i];
	}

	dest[i + y] = '\0';

	return dest;

}
