#ifndef VC_PARAM_TO_TAB_H
#define VC_PARAM_TO_TAB_H

// size_param is the length of the argument;
// str is the address of the argument;
// copy is the copy of the argument;
// words is the array returned by vc_split_whitespaces.

typedef struct s_stock
{
    /* data */
    int size_param;
    char *str;
    char *copy;
    char **words;
}t_stock;

#endif