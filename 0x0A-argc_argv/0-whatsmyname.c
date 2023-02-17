#include <stdio.h>

/**
 * main-prints its name followed by a newline
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always return 0 (success)
*/
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
