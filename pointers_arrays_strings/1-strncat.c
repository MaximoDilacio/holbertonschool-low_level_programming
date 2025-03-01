#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: ammount of bytes
 * Return: return temp
*/
char *_strncat(char *dest, char *src, int n)
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

	while (n-- > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (temp);
}
