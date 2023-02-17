#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Return 0 if success 1 if error
*/
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}