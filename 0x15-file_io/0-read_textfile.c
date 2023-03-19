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
	int fileDescriptor, rd, wr;
	char *str;

	if (!filename)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor < 0)
		return (0);

	str = malloc(sizeof(char) * letters + 1);
	if (!str)
		return (0);
	rd = read(fileDescriptor, str, letters);
	if (rd == -1)
	{
		free(str);
		return (0);
	}

	str[letters] = '\0';

	wr = write(1, str, rd);
	if (wr == -1)
	{
		free(str);
		return(0);
	}

	close(fileDescriptor);
	free(str);

	return (wr);

}
