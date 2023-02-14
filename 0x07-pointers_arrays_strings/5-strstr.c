#include "main.h"

/**
 * _strstr- locates a substring
 * @haystack: string to search in
 * @needle: string to search for
 *
 * Return: return a pointer to the substring otherwise
 * null
*/
char *_strstr(char *haystack, char *needle)
{
	char *nstart, *ntmp;

	ntmp = needle;

	if (*needle == '\0')
		return (haystack);

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack != *ntmp)
			continue;

		nstart = haystack;

		while (1)
		{
			if (*ntmp == 0)
				return (haystack);
			if (*nstart++ != *ntmp++)
				break;

		}
		ntmp = needle;
	}
	return ('\0');
}
