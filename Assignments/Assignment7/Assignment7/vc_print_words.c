/**
 * File              : vc_print_words.c
 * Author            : Juan and Kazuya
 * Date              : Tue 12 Feb 2019
 */
#include <stdio.h>


void print_word(char *str) {

	for (int i = 0; str[i] != '\0'; i++) {
	
		putchar(str[i]);

	}
	putchar('\n');

}

void vc_print_words(char **words) {

	for (int i = 0; words[i] != NULL; i++) {
		
		print_word(words[i]);

	}

}

