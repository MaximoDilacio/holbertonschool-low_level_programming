#include "main.h"

/**
 * puts2 - Print every other character
 * @str: This is string
 */
void puts2(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr += 2;
	}

	_putchar('\n');
}

