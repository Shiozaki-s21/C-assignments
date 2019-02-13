/**
 * File              : vc_concat_params.c
 * Author            : Juan and Kazuya
 * Date              : Tue 12 Feb 2019
 */
#include <stdlib.h>


static int string_length(char *str){

    int length = 0;
    for(; str[length] != '\0'; length++);
    return length;
}

static void concat(char *target, char *src, int *position){

    for(int i = 0; src[i] != '\0'; i++){
        target[*position] = src[i];
        (*position)++;
    }
    target[*position] = '\n';

}

char *vc_concat_params(int argc, char **argv){

    int con_length = 0;
    for (int i = 0; i < argc; i++){
        con_length += string_length(argv[i]);
    }
    con_length += argc;

    char *new = malloc(con_length * sizeof(char));

    int current_pos = 0;

    for(int i = 0; i < argc; i++){
        concat(new, argv[i], &current_pos);
        current_pos++;
    }
    new[current_pos] = '\0';
    return new;

}