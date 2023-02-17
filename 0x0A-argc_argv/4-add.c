#include <stdio.h>
#include <stdlib.h>


/**
 * check_pos_num- checks whether a string is made of
 * positive numbers or not
 * @c: string to check
 *
 * Return: return 1 if pos_num 0 if not
*/
int check_pos_num(char *c)
{
	for (; *c != '\0'; c++)
	{
		if (*c < '0' || *c > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main- adds positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Return 0 if success 1 if error
*/
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (check_pos_num(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	sum = atoi(argv[1]);
	for (i = 2; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
