#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - check if c is lowercase
 * @c: parameter that obtain a character
 * Return: 1 if is lower, 0 otherwise
*/
int _isdigit(int c)
{
	if (c < 9)
	{
		if (isdigit(c))
		{
			return (1);
		} else
		{
			return (0);
		}
	}
	return (-1);
}
