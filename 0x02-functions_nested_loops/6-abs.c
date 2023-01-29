#include "main.h"

/**
 * _abs- computes the absolute value of an integer
 * @int: integer value to compute
 *
 * Return: absolute value of int
 */
int _abs(int x)
{

if (x > 0)
{
	return (x);
}
else if (x < 0)
{
	return (x * -1);
}
else
{
	return (x);
}

}
