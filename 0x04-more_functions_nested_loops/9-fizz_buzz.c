#include <stdio.h>

/**
 * main- Prints numbers 1-100, except when
 * multiples of 3 print "Fizz", 5 "Buzz"
 * and for both print "FizzBuzz"
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
	{
	if (!(i % 3))
		{
		if (!(i % 5))
			{
			printf("FizzBuzz ");
			}
		else
			{
		printf("Fizz ");
			}
		}
		else if (!(i % 5))
		{
		printf("Buzz ");
		}
	else
		{
		printf("%d ", i);
		}
	}

printf("\n");

return (0);
}

