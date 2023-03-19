#include "main.h"

/**
 * _strlen- returns the length of a string
 * @s: string to check lenght of
 *
 * Return: Always return length of string
 */
int _strlen(const char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;

	return (l);
}

/**
 * append_text_to_file- appends text to the end of a file
 * @filename: name of file
 * @text_content: text to append to the end of the file
 *
 * Return: 1 on success and -1 on fail
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_APPEND | O_WRONLY);

	if (!text_content)
		text_content = "";

	if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);

	return (1);
}
