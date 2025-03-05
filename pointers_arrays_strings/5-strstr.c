#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Return haystack
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack, *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
