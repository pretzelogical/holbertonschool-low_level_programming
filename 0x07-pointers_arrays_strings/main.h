#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _putchar(char c);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char is_subst_match(char *c, char *subst);
char *_strpbrk(char *s, char *accept);

#endif