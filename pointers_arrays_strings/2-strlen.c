#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that print count caracters
 * @s: is array
 * Return: return value n
*/
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}

