/**
* File              : vc_vc_str_is_alpha.c
* Author            : Kazuya, Hao-tse
* Date              : Friday Feb 08 2019
*/

#include "pch.h"
#include <stdio.h>

int vc_str_is_alpha(char *str)
{

	int i = 0;
	if (str == NULL || *str == NULL)
	{
		return 1;
	}
	for (i; str[i] != '\0'; i++)
	{

		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
		{

		}
		else if ((str[i] >= '0' && str[i] <= '9'))
		{

		}
		else
		{
			return 0;
		}
	}
	return 1;
}