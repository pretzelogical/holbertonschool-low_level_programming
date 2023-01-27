#include <stdio.h>
/**
 * main- prints all the numbers of base 16
 *
 * Return: Always return 0 (Successful)
 */
int main(void)
{
char hexa[17] = "0123456789abcdef";

for (int i = 0; i < sizeof(hexa) - 1; i++)
putchar(hexa[i]);

putchar('\n');

return (0);
}
