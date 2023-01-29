#include "main.h"

/**
 * print_alphabet- print the alphabet followed by a newline
 *
 * Return: Always return nothing (void)
 */
void print_alphabet(void)
{
int i;
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

for (i = 0; i < 26; i++)
{
	_putchar(alphabet[i]);
}
_putchar('\n');
}

