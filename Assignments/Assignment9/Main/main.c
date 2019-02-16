/*
 * @Author: Kazuya Takahashi 
 * @Date: 2019-02-14 12:18:56 
 * @Last Modified by: Kazuya Takahashi
 * @Last Modified time: 2019-02-14 13:55:16
 */
#include <stdio.h>
#include <stdlib.h>
#include "vc_include.h"

// void vc_putnbr(int nb)
// {
//     int nbTemp = nb;
//     int count = 0;
//     for (; nbTemp != 0; nbTemp = nbTemp / 10)
//     {
//         count++;
//     }

//     nbTemp = nb;
//     int reverseNum = 0;
//     for (; nbTemp != 0; nbTemp = nbTemp / 10)
//     {
//         int x = 1;
//         for (int i = 1; i < count; i++)
//         {
//             x *= 10;
//         }

//         reverseNum += (nbTemp % 10) * x;
//         count--;
//     }

//     nbTemp = reverseNum;
//     for (; nbTemp != 0; nbTemp = nbTemp / 10)
//     {
//         putchar((nbTemp % 10) + 48);
//     }

//     putchar(10);
// };

// int plusOne(int num) {
//     return num += 1;
// }

// void vc_foreach(int *tab, int length, void(*f)(int)) {
//     // execute vc_putnbr to each number
//     for(int i = 0 ;i < length; i++,tab++) {
//         f(*tab);     
//     }
// }

// int *vc_map(int *tab, int length, int(*f)(int)) {
//     int *result = (int *)malloc(length * sizeof(int));
    
//     for(int i = 0; i < length; i++, tab++) {
//         *(result + i) = f(*tab);
//     }
//     return result;
// }

// int isCapital(char *target) {
//     if(65 <= *target && *target <= 90) {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int vc_any(char **tab, int(*f)(char*)) {
//     // if tab dosen't have a element, return 0
//     // exexute function
//     int result = 0;
//     for(; tab != '\0';*tab++) {
//         char *s = *tab;
//        if(result = f(s) == 1) return 1;
//     }
//     return 0;
// }

// int vc_count_if(char **tab, int(*f)(char*)) {
//     // if tab dosen't have a element, return 0
//     // exexute function
//     int result = 0;
//     int size = sizeof(*tab);
//     for(; *tab != '\0'; *tab++) {
//        if(f(*tab) == 1)  result++;
//     }
//     return result;
// }

// int is_sort(int a, int b) {
//     if (a < b) {
//         return -1;
//     } else {
//         return 0;
//     }    
// }

// int vc_is_sort(int *tab, int length, int(*f)(int, int)) {
//     for(int i = 0; i < length - 1; i++) {
//         if(f(tab[i], tab[i + 1]) != -1) {
//             return 0;
//         } 
//     }
//     return 1;
// }

// void vc_sort_words(char **words) {
//     int i;
//     char *c = words[2];
//     for(i = 0; words[i] != '\0'; i++){
//         for(int j = i + 1; words[j] != '\0'; j++){
//             if(0 < vc_strcmp(words[i], words[j])){
//                 char *tmp = words[i];
//                 words[i] = words[j];
//                 words[j] = tmp;        
//             }
//         }
//     };
// }

int main(int argc, char const *argv[])
{
    ex01(argc, argv);
    ex02(argc, argv);
    ex03(argc, argv);
    ex04(argc, argv);
    ex05(argc, argv);
    ex07(argc, argv);
    return 0;
}


// Ex07
// int main(int argc, char const *argv[])
// {
//     char *str = "Hello World Goodbye";
//     char **words = vc_split_whitespaces(str);
//     vc_sort_words(words);
//     int i = 0;
//     while(i < 4) {
//         printf("%s\n", words[i]);
//         i++;
//     }
// }

// Ex05
// int main(int argc, char const *argv[])
// {
//     int arr1[] = {1,2,3,4,5};
//     int arr2[] = {5,4,3,2,1};

//     int(*f)(int, int);
//     f = &is_sort;

//     printf("result of arr1 is ... %d\n", vc_is_sort(arr1, 5,f));
//     printf("result of arr2 is ... %d\n", vc_is_sort(arr2, 5,f));

//     return 0;
// }



// Ex04
// int main(int argc, char const *argv[])
// {
//     /* code */
//     char *strArr[] = {"hello", "World", "Goodby", '\0'};
    
//     // add null char
//     // create function pointer
//     int(*f)(char *); 
//     f = &isCapital;

//     // execute funtion
//     printf("result is %d\n", vc_count_if(strArr, f));
//     return 0;
// }

// Ex03
// int main(int argc, char const *argv[])
// {
//     /* code */
//     char *strArr[] = {"hello", "World", "goodby"};
    
//     // create function pointer
//     int(*f)(char *); 
//     f = &isCapital;

//     // execute funtion
//     printf("result is %d\n", vc_any(strArr, f));
//     return 0;
// }


// Ex02
// int main(int argc, char const *argv[])
// {
//     // make array
//     int tab[10];
//     for(int i = 1; i <= 10; i++) {
//         tab[i - 1] = i;
//     }

//     // create function pointer 
//     int (*PlusOne)(int);
//     PlusOne = &plusOne;

//     // excute funtion 
//     int *tab2 = vc_map(tab, 5, PlusOne);

//     // show result
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%d\n", tab2[i]);;
//     }

//     return 0;
// }

// Ex01
// int main(int argc, char *argv[])
// {
//     // make array
//     int tab[100];
//     for(int i = 1; i <= 100; i++) {
//         tab[i - 1] = i;
//     }

//     // create function pointer
//     void (*vc_putnbr)(int);
//     vc_putnbr = &vc_putnbr;

//     // execute function
//     vc_foreach(tab, 86, vc_putnbr);

//     return 0;
// }

