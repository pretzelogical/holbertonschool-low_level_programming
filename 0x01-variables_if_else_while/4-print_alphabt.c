#include <stdio.h>
/**
 * main- print alphabet except for q and e
 *
 * Return: Always returns 0 (successful)
 */
int main(void)
{
char alph[25] = "abcdfghijklmnoprstuvwxyz";
int i;

for (i = 0; i < sizeof(alph) - 1; i++)
putchar(alph[i]);

putchar('\n');

return (0);
}
