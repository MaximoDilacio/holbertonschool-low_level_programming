#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - check if c is lowercase
 * @c: parameter that obtain a character
 * Return: 1 if is lower, 0 otherwise
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
