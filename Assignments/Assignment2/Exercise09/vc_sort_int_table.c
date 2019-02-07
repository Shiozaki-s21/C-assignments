/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 23:31:40 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 00:37:00
 */

#include <stdio.h>

void dispNumAry(char *str, int *tab, int size)
{
    printf("%s: ", str);
    for (int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
    }
    printf("\n");
}

void vc_sort_int_table(int *tab, int size)
{
    printf("==================\n%1$s\n==================\n", __func__);

    int tempNum = 0;
    //
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; i < size - i; i++)
        {
            for (int j = size - 1; j > 0; j--)
            {
                if (tab[j] < tab[j - 1])
                {
                    tempNum = tab[j];
                    tab[j] = tab[j - 1];
                    tab[j - 1] = tempNum;
                }
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
    }
    printf("\n");
}