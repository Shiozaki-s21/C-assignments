/**
 * File              : vc_split_whitespaces.c
 * Author            : Juan and Kazuya
 * Date              : Tue 12 Feb 2019
 */
#include <stdlib.h>

static char *vc_strdup(char *src) {

	int k;
	for (k = 0; src[k] != '\0'; k++);

	char *c = malloc(sizeof(k + 1));

	int i = 0;
	while (src[i] != '\0') {
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return c;

}


char **vc_split_whitespaces(char *str){

    int num_str = 1;
    int currentlength = 0;



    for(int i = 0; str[i] != '\0'; i++){
        if((str[i] == 32 || str[i] == 9 || str[i] == 10) && currentlength > 0){
            num_str++;
            currentlength = 0;
        } else{
            currentlength++;
        }
    }

	char *mstr = vc_strdup(str);
    char **result = (char **)malloc((num_str + 1) * sizeof(char*));
    int current_result = 0;


    currentlength = 0;
    for(int i = 0; mstr[i] != '\0'; i++){
        if(mstr[i] == ' ' || mstr[i] == '\t' || mstr[i] == '\n'){
            mstr[i] = '\0';
            currentlength = 0;
        } else if(!(mstr[i] == ' ' || mstr[i] == '\t' || mstr[i] == '\n') && currentlength == 0){
            result[current_result] = &mstr[i];
            current_result++;
            currentlength++;
        } else{
            currentlength++;
        }
    }
	result[current_result] = NULL;

    return result;

}
