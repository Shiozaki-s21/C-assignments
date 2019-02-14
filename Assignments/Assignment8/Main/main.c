#include <stdio.h>
#include <stdlib.h>

#include "vc_boolean.h"
#include "vc_abs.h"
#include "vc_point.h"
#include "vc_param_to_tab.h"
#include "vc_include.h"

struct s_stock *vc_param_to_tab(int ac, char **av) {
    t_stock *result = (t_stock *)malloc(ac * sizeof(t_stock));
    // printf("size is %lu\n", sizeof(result));
    int i = 0;
    //result[i] or result++
    while(i < ac){
        // get size
        result -> size_param = sizeof(av[i]);
        // get address
        result -> str = av[i];
        // copy
        result -> copy = vc_strdup(av[i]);
        // split by space
        result -> words = vc_split_whitespaces(av[i]);   

        i++;
        result++;
    }
    //end of the array of result
    result -> str = '\0';
    return result;
}

// Ex03
// ./main "Hello" "Hello World"
int main(int argc, char *argv[])
{
    t_stock *result = vc_param_to_tab(argc, argv);
    
    for(; result -> str != '\0'; result++) {
        // show the result
        printf("size_param %d\n", result -> size_param);
        printf("str %s\n", result -> str);
        printf("copy %s\n", result -> copy);
        printf("word %s\n", result -> words[0]);
    }
    return 1;
}

// Ex02
// void set_point(t_point *point)
// {
//     point->x = 86;
//     point->y = 89;
// }
// int main(void)
// {
//     t_point point;
//     set_point(&point);
//     printf("X:%d Y:%d", point.x, point.y);
// return 0; 
// }

// Ex01
// int main(int argc, char **argv)
// {
//     printf("input 1 ... %d\n", ABS(1));
//     printf("input -1 ... %d\n", ABS(-1));
// }