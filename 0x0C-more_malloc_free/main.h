#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif