/*
 * @Author: Kazuya Takahashi Hao Tue 
 * @Date: 2019-02-11 13:40:59 
 * @Last Modified by:   Kazuya Takahashi Hao Tue 
 * @Last Modified time: 2019-02-11 13:40:59 
 */
#include <stdio.h>

// method for compairing and exchange
void compair(char  *a, char  *b) {
    for(int i = 0; a[i] && b[i]; i++) {
        if(a[i] > b[i]) {
            char *tmp = a[i];
            a[i] = b[i];
            b[i] = tmp;
        }
    }
}

int main(int argc, char const *argv[])
{
    // Ex01
    printf("+++++Ex04+++++\n");
    printf("%s \n", argv[0]);
    printf("++++++++++++++\n");

    // Ex02
    printf("+++++Ex02+++++\n");
    for(int i = 1; argv[i]; i++){
        printf("%s\n", argv[i]);
    }
    printf("++++++++++++++\n");
    printf("\n");
    
    // Ex03
    printf("+++++Ex03+++++\n");
    int h;
	for (h = 1; h < argc; h++)
	{
	printf("%s \n", argv[h]); 
    printf("++++++++++++++\n");

    // Ex04
    printf("+++++Ex04+++++\n");
    int length = 0;
    while(argv[length++]);
    length--;

    printf("Before: ");
    for(int k = 1; k < length; k++) {
        printf("%s", argv[k]);
    }
    printf("\n");
    for(int i = length - 1; i != 0; i--) {
        for(int j = 1; j < i; j++) {
            compair(argv[j], argv[i]);
        }
    }

    printf("After: ");
    for(int k = 1; k < length; k++) {
        printf("%s", argv[k]);
    }
    
    printf("\n");
    printf("++++++++++++++\n");

    return 0;
}
