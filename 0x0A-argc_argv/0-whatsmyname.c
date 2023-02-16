#include <stdio.h>

/**
 * main-prints its name followed by a newline
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always return 0 (success)
*/
int main(int argc, char *argv[])
{

	if (argc == 1)
		printf("%s\n", argv[argc - 1]);
	else
		printf("%s\n", argv[0]);
	return (0);
}
