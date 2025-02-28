#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: This is string
 */
void puts_half(char *str)
{
	int n = 0, i;

	while (str[n])
		n++;

	i = (n + 1) / 2;

	while (str[i])
		_putchar(str[i++]);

	_putchar('\n');
}

