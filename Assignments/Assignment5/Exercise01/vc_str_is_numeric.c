/**
* File              : vc_str_is_numeric.c
* Author            : Kazuya, Hao-tse
* Date              : Friday Feb 08 2019
*/

#include "pch.h"
#include <stdio.h>


int vc_str_is_numeric(char *str)
{
	int i = 0;
	if (str == NULL || *str == NULL)
	{
		return 1;
	}
	for (i; str[i] != '\0'; i++)
	{

		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return 0;
		}

	}
	return 1;

}


