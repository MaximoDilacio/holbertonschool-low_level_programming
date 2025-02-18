#include "main.h"
#include <ctype.h>
/**
 *_isalpha - check if c is alphabetic character
 *
 * @c: parameter that obtain a character
 *Return: 1 if is alphabetic, 0 otherwise
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	return (0);
}
