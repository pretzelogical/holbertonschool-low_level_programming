#include "3-calc.h"

/**
 * main- performs simple operations
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 if successful, if number
 * of arguments wrong 98, if operator wrong
 * 99, if divide by 0 100
*/
int main(int argc, char *argv[])
{
	int x, y;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	op = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && y == 0) ||
		(*op == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(x, y));

	return (0);
}
