#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- Prints a random number, the last digit and
 * some test based on the value of the digit
 * Return: Always returns 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int nlast;
nlast = n % 10;

printf("Last digit of %d is %d and is ", n, nlast);

if (nlast > 5)
printf("greater than 5\n");
else if (nlast == 0)
printf("0\n");
else if (nlast < 6)
printf("less than 6 and not 0\n");

return (0);
}
