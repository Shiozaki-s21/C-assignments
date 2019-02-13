/*
 * @Author: Kazuya Takahashi Juan 
 * @Date: 2019-02-12 14:58:08 
 * @Last Modified by:   Kazuya Takahashi Juan 
 * @Last Modified time: 2019-02-12 14:58:08 
 */

#include<stdio.h>

int convertBaseCharToInt(char *base) {
    int result = 0;
    int weight = 1;
    int digitCount = 0;

    while(base[++digitCount]);
    digitCount--;

    for(int i = digitCount; 0 <= i; i--)
    {
        /* code */
        int charCode = base[i] - 48;
        result += charCode * weight;
        weight *= 10;
    }

    return result;
}


int convertNbrCharToInt(char *nb, int base_from) {
    
    // count digit
    int digitCount = 0;
    while(nb[++digitCount]);
    digitCount--;

    // convert
    int result = 0;
    int weight = 1;
    for(int i = digitCount; 0 <= i; i--) {
        // A to Z and a to z convert
        int number = 0;
        if(65 <= nb[i] && nb[i] <= 90){
            number = (int)nb[i] - 55;
        } else if ( 97 <= nb[i] && nb[i] <= 122)
        {
            number = (int)nb[i] - 87;
        } else {
            number = (int)nb[i] - 48;
        }

        result += number * weight;
        weight *= base_from;
    }

    // return result
    return result;
}

char *convertNbrIntToChar(int nbr, int base_to) { 
    // count digit
    int digit = 0;
    int weight = 1;
    while((nbr / weight) != 0) {
        digit++;
        weight *= base_to;
    }

    weight /= base_to;

    printf("digit is ... %d\n", digit);

    //+1 for NULL 
    char *result = malloc((digit + 1) * sizeof(char));
    int loop = digit;
    // trancelation to base_to and convert to char
    while(0 < loop) {
        int i = 0;
        if (nbr >= weight) {
            i = nbr / weight;            
        } else {
            i = nbr % weight;
        }

        char ch;
        // convert to abc if i > 9
        if(i > 9) {
            ch = i + 55;
        } else {
            ch = i + 48;
        }

        nbr -= i * weight;
        weight /= base_to;
        result[digit - loop] = ch;
        loop--;
    }
    result[digit] = '\0';
    printf("result is ... %s\n", result);
    return result;

}   


char *vc_convert_base(char *nbr, char *base_from, char *base_to) { 
    int baseFromInt = convertBaseCharToInt(base_from);
    int baseToInt = convertBaseCharToInt(base_to);
    int nbrInt = convertNbrCharToInt(nbr, baseFromInt);
   
    //convert nbr from int to char with base_to
    char *result = convertNbrIntToChar(nbrInt, baseToInt);

    printf("nbr %d to %d from %d\n", nbrInt, baseToInt, baseFromInt);
    return result;
}