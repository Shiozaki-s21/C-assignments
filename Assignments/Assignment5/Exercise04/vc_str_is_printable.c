/**
* File              : vc_str_is_printable.c
* Author            : Kazuya, Hao-tse
* Date              : Friday Feb 08 2019
*/
#include "pch.h"
#include <stdio.h>


int vc_str_is_printable(char *str)
{

	int i = 0;
	if (str == NULL || *str == NULL)
	{
		return 1;
	}
	for (i; str[i] != '\0'; i++)
	{

		if (!(str[i] >= '32' && str[i] <= '127'))
		{
			return 0;
		}

	}
	return 1;

	
}
