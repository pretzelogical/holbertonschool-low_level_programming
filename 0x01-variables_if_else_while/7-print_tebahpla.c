#include <stdio.h>
/**
 * main- prints the alphabet in reverse
 *
 * Return: Always returns 0 (successful0
 */
int main(void)
{
char alph;

for (alph = 'z'; alph >= 'a'; alph--)
putchar(alph);

return (0);
}

