/**
 * File              : vc_print_alphabet.c
 * Author            : Masa, Kazuya
 * Date              : Wed 6 Jan 2019
 */

#include <stdio.h>

void vc_print_alphabet()
{
    printf("==================\n%1$s\n==================\n", __func__);
    char ch = 'a';

    for (; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar(10);
};