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
 * _strcpy- copies string pointed to by src
 * (including null byte) to buffer pointed
 * to by dest
 *
 * @dest: buffer to copy to
 * @src: string to copy
 *
 * Return: Always return nothing (void)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * create_file- creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 on success -1 on fail
*/
int create_file(const char *filename, char *text_content)
{
	int fileD;
	char *str;
	int wr;

	if (!filename)
		return (-1);

	fileD = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fileD == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	str = malloc(sizeof(char) * _strlen(text_content) + 1);
	if (!str)
		return (-1);
	_strcpy(str, text_content);
	str[_strlen(text_content) + 1] = '\0';
	wr = write(fileD, str, _strlen(text_content) + 1);
	if (wr == -1)
		return (-1);
	free(str);


	close(fileD);
	return (1);
}
