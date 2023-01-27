#include <stdio.h>
/**
 * main- prints lowercase alphabet a-z
 *
 * Return: Always returns 0 (successful)
 */
int main(void)
{

char alph;

for (alph = 'a'; alph <= 'z'; alph++)
putchar(alph);

putchar('\n');

return (0);
}
