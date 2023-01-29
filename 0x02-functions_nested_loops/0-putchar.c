#include "main.h"
/**
 * main- Prints "_putchar" followed by a newline
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
int i;
char message[8] = "_putchar";

for (i = 0; i < 8; i++)
{
	_putchar(message[i]);
}
_putchar('\n');

return (0);
}
