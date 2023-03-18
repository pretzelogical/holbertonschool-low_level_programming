#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}


/**
 * read_textfile- reads a text file and prints it to POSIX STDOUT
 * @filename: file to read
 * @letters: actual number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char *str;
	size_t i;
	ssize_t letterCount;

	if (!filename)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor < 0)
		return (0);

	str = malloc(letters * sizeof(char));
	if (!str)
		return (0);

	read(fileDescriptor, str, letters);

	letterCount = 0;
	for (i = 0; i < letters && *(str + i) != '\0'; i++)
	{
		if (*(str + i) > 32 && *(str + i) < 127)
			letterCount++;
		_putchar(*(str + i));
	}

	free(str);

	return (letterCount);

}
