#include "main.h"

/**
 * _islower- checks for lowercase character
 * @c: character input
 *
 * Return: return 1 if c is lowercase 0 if otherwise
 */
int _islower(int c)
{

if (c > 96 && c < 123)
{
	return (1);
}
else
{
	return (0);
}

}
