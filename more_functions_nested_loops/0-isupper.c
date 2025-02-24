#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check if c is uppercase
 * @c: parameter that obtain a character
 * Return: Return 0 if execute correctly
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
