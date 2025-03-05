#include "main.h"
#include <string.h>
/**
 * _strpbrk - function that search a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == accept[i])
		{
			return (&s[i - 1]);
		}
	}

	return (NULL);
}
