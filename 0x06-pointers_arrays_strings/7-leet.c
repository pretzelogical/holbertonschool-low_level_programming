#include "holberton.h"

/**
 * leet- encodes a string into 1337SP34K
 * @s- string to encode
 * 
 * Return: Always return a pointer to the string
*/
char *leet(char *s)
{	
	char *start;

	start = s;
	
	while (*s != '\0')
	{
		leet_convert(s);
		s++;
	}

	return (start);

}

/**
 * leet_convert- changes character to 1337 version
 * @c- character to check
 * 
 * Return: Return converted character, else 0
*/
char leet_convert(char *c)
{
	int i;
	char pre[5] = {'A', 'E', 'O', 'T', 'L'};
	char post[5] = {'4', '3', '0', '7', '1'};


	for (i = 0; i < 5; i++)
		if(*c == pre[i] || *c == pre[i] + 32)
		{

			*c = post[i];
			return (*c);
		}
	return (0);
}