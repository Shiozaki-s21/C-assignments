/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-06 15:40:34 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-07 15:02:59
 */

#include <stdio.h>
int vc_find_next_prime(int n)
{
    printf("==================\n%1$s\n==================\n", __func__);
/**
 * File       : vc_find_next_prime.c
 * Author      : Kazuya, Tom
 * Date       : Thur, Feb 7, 2019
 */
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
    int vc_find_next_prime(int n)
    {
        clock_t start, end;
        start = clock();
        bool isPrime = false;
        while (!isPrime)
        {
            int count = 0;
            for (int i = 1; i <= n; i++)
            {
                if ((n % i) == 0)
                    count++;
            }
            if (count == 2)
                isPrime = true;
            else
            {
                n++;
            }
        }
        end = clock();
        if (((double)(end - start) / CLOCKS_PER_SEC) <= 2.0)
            return n;
        return 0;
    }

    int main()
    {
        printf("%d\n", vc_find_next_prime(16754));
        return 0;
    }
}