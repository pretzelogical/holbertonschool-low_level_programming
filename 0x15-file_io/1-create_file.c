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
 * create_file- creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 on success -1 on fail
*/
int create_file(const char *filename, char *text_content)
{
	int fileD;
	int wr;

	if (!filename)
		return (-1);

	fileD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileD == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	wr = write(fileD, text_content, _strlen(text_content));
	if (wr == -1)
		return (-1);


	close(fileD);
	return (1);
}
