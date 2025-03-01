#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Destination string
 * @src: Source string to append
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	if (dest != temp && *(dest - 1) != ' ')
	{
		*dest = ' ';
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
