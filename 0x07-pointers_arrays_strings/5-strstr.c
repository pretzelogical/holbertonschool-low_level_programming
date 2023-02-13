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

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			nstart = haystack;
			while (*ntmp == *haystack)
			{
				if (*ntmp == '\0')
					return (nstart);
				ntmp++;
				haystack++;
			}
		}
		haystack++;
	}
	return (0);
}
