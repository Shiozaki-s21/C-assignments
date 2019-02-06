#include <stdio.h>

/**
 * File              : vc_print_comb2.c
 * Author            : Masa, Kazuya
 * Date              : Wed 6 Jan 2019
 */
void vc_vc_print_comb()
{
    printf("==================\n%1$s\n==================\n", __func__);

    int digits[10] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

    for(int i = 0; i < 10; i++) {

        for(int j = i + 1; j < 10; j++) {

            for(int k = j + 1; k < 10; k++) {
                putchar(digits[i]);
                putchar(digits[j]);
                putchar(digits[k]);
                putchar(44);
                putchar(32);

            }
        }
    }
    putchar(10);
};