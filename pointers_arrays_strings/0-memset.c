#include "main.h"
#include <stdio.h>
/**
 * _memset - function that fill the first n bytes of the memory
 * @s: string
 * @b: string
 * @n: int
 * Return: return s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
