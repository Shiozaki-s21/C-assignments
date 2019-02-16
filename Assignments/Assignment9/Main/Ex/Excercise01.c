#include <stdio.h>
#include <stdlib.h>

// Ex01
void vc_foreach(int *tab, int length, void(*f)(int)) {
    // execute vc_putnbr to each number
    for(int i = 0 ;i < length; i++,tab++) {
        f(*tab); 
    }
}

void vc_putnbr(int nb)
{
    int nbTemp = nb;
    int count = 0;
    for (; nbTemp != 0; nbTemp = nbTemp / 10)
    {
        count++;
    }

    nbTemp = nb;
    int reverseNum = 0;
    for (; nbTemp != 0; nbTemp = nbTemp / 10)
    {
        int x = 1;
        for (int i = 1; i < count; i++)
        {
            x *= 10;
        }

        reverseNum += (nbTemp % 10) * x;
        count--;
    }

    nbTemp = reverseNum;
    for (; nbTemp != 0; nbTemp = nbTemp / 10)
    {
        putchar((nbTemp % 10) + 48);
    }

    putchar(10);
}

int ex01(int argc, char *argv[])
{
    // make array
    int tab[100];
    for(int i = 1; i <= 100; i++) {
        tab[i - 1] = i;
    }

    // create function pointer
    void (*f)(int);
    f = &vc_putnbr;

    // execute function
    vc_foreach(tab, 86, f);

    return 0;
}