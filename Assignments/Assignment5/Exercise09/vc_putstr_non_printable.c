/**
* File              : vc_putstr_non_printable.c
* Author            : Kazuya, Hao-tse
* Date              : Friday Feb 08 2019
*/

#include "pch.h"
#include <stdio.h>
#include <stdlib.h>



static char* decimalToHex(int decimal)
{
	char *result = (char *)malloc(250);
	result[0] = '\\';
	int i = 0;
	int temp;
	int quotient = 0;
	quotient = decimal;

	while (quotient != 0)
	{
		temp = quotient % 16;
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		printf("%i", temp);
		result[i] = temp;
		quotient = quotient / 16;
	}
	return result;
}


void vc_putstr_non_printable(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] <= 31)
		{
			printf("asdasd");

			printf("%s", decimalToHex(str[i]));
		}
	}
}


