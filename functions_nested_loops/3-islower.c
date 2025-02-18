#include "main.h"
#include <ctype.h>
/**
 *_islower - check if c is lowercase
 *
 * @c: parameter that obtain a character
 *Return: 1 if is lower, 0 otherwise
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
