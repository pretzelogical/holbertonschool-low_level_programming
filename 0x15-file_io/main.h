#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(const char *s);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _copy_files(int from, int to, char **argv);
void _close_files(int from, int to);

#endif
