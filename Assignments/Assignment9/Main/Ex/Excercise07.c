#include <stdio.h>
#include <stdlib.h>

int vc_strcmp(char *s1, char *s2)
{
    const int same = 0;
    while (*s1 != '\0' || *s2 != '\0')
    {
        if (*s1 > *s2)
        {
            return 1;
        }
        else if (*s1 < *s2)
        {
            return -1;
        }

        if (*s1 == '\0')
            return -1;
        if (*s2 == '\0')
            return 1;

        s1++;
        s2++;
    }
    return same;
}

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


void vc_sort_words(char **words) {
    int i;
    for(i = 0; words[i] != '\0'; i++){
        for(int j = i + 1; words[j] != '\0'; j++){
            if(0 < vc_strcmp(words[i], words[j])){
                char *tmp = words[i];
                words[i] = words[j];
                words[j] = tmp;        
            }
        }
    };
}

// Ex07
int ex07(int argc, char const *argv[])
{
    char *str = "Hello World Goodbye";
    char **words = vc_split_whitespaces(str);
    vc_sort_words(words);
    int i = 0;
    while(*words != '\0'  ) {
        printf("%s\n", *words);
        *words ++;
    }
}
